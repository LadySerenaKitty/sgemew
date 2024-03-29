/** @internal
 *  Copyright 2019 StarPhoenix Media
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 * @endinternal
**/

#include "SystemMemory.h"
#include <iomanip>
#include <locale>

using namespace sgemew::hardware;

SystemMemory::SystemMemory() : MemoryDevice::MemoryDevice()
{
	ranges = new std::list<sgemew::util::MemoryRanger*>();
}

SystemMemory::~SystemMemory()
{
}

void SystemMemory::add(sgemew::util::MemoryRanger *memranger)
{
	ranges->push_back(memranger);
	std::locale lc = std::cout.getloc();
	std::cout << "Added memory segment ";
	std::cout << std::setw(8) << std::setfill('0') << std::hex << memranger->getBase();
	std::cout << " - ";
	std::cout << std::setw(8) << std::setfill('0') << std::hex << memranger->getEnd();
	std::cout << " (";
	std::cout.imbue(std::locale("en_US.UTF-8"));
	std::cout << std::dec << memranger->getLength();
	std::cout.imbue(lc);
	std::cout << " bytes)" << std::endl;
}

void SystemMemory::addA(uint64_t start, uint64_t end, MemoryDevice *memdev)
{
	addL(start, end - start, memdev);
}

void SystemMemory::addL(uint64_t start, uint64_t length, MemoryDevice *memdev)
{
	sgemew::util::MemoryRanger *mr = new sgemew::util::MemoryRanger(start, length, memdev);
	add(mr);
}

void SystemMemory::createA(uint64_t start, uint64_t end)
{
	createL(start, end - start);
}

void SystemMemory::createL(uint64_t start, uint64_t length)
{
	MemoryDevice *md = new MemoryDevice(length);
	addL(start, length, md);
}

MemoryDevice* SystemMemory::getByAddress(uint64_t addr)
{
	return getByRanger(addr)->getMemory();
}

sgemew::util::MemoryRanger* SystemMemory::getByRanger(uint64_t addr)
{
	for(sgemew::util::MemoryRanger *mr : *ranges)
	{
		if (mr->isAddrInRange(addr))
		{
			return mr;
		}
	}
	return ranges->front();
}

sgemew::util::MemoryRanger *lastaccess = nullptr;

uint8_t& SystemMemory::operator [](uint64_t addr)
{
	// accellerate memory access via caching
	if (lastaccess == nullptr || !lastaccess->isAddrInRange(addr))
	{
		lastaccess = getByRanger(addr);
	}
	return (*lastaccess->getMemory())[addr - lastaccess->getBase()];
}

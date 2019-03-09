#include "SystemMemory.h"
#include <iomanip>
#include <locale>

namespace sgemew
{

namespace hardware
{

SystemMemory::SystemMemory() : sgemew::hardware::MemoryDevice::MemoryDevice()
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

void SystemMemory::addA(uint32_t start, uint32_t end, MemoryDevice *memdev)
{
	addL(start, end - start, memdev);
}

void SystemMemory::addL(uint32_t start, uint32_t length, MemoryDevice *memdev)
{
	sgemew::util::MemoryRanger *mr = new sgemew::util::MemoryRanger(start, length, memdev);
	add(mr);
}

void SystemMemory::createA(uint32_t start, uint32_t end)
{
	createL(start, end - start);
}

void SystemMemory::createL(uint32_t start, uint32_t length)
{
	sgemew::hardware::MemoryDevice *md = new sgemew::hardware::MemoryDevice(length);
	addL(start, length, md);
}

MemoryDevice* SystemMemory::getByAddress(uint32_t addr)
{
	return getByRanger(addr)->getMemory();
}

sgemew::util::MemoryRanger* SystemMemory::getByRanger(uint32_t addr)
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

uint8_t &SystemMemory::operator [](uint32_t addr)
{
	// accellerate memory access via caching
	if (lastaccess == nullptr || !lastaccess->isAddrInRange(addr))
	{
		lastaccess = getByRanger(addr);
	}
	return (*lastaccess->getMemory())[addr - lastaccess->getBase()];
}

}
}

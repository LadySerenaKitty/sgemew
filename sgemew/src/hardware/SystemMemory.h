/**
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
**/

#ifndef SYSTEMMEMORY_H
#define SYSTEMMEMORY_H

#include <list>
#include <iostream>

#include "MemoryDevice.h" // Base class: sgmew::hardware::MemoryDevice
#include "../util/MemoryRanger.h"

namespace sgemew
{

namespace hardware
{

class SystemMemory : public sgemew::hardware::MemoryDevice
{
public:
	SystemMemory();
	~SystemMemory();
/*	uint8_t read8(uint32_t addr);
	uint16_t read16(uint32_t addr);
	uint32_t read32(uint32_t addr);
	uint64_t read64(uint32_t addr);

	void write(uint32_t addr, uint8_t data);
	void write(uint32_t addr, uint16_t data);
	void write(uint32_t addr, uint32_t data);
	void write(uint32_t addr, uint64_t data);*/

	uint8_t &operator[](uint32_t addr);

	void add(sgemew::util::MemoryRanger *memranger);
	void addA(uint32_t start, uint32_t end, MemoryDevice *memdev);
	void addL(uint32_t start, uint32_t length, MemoryDevice *memdev);

	void createA(uint32_t start, uint32_t end);
	void createL(uint32_t start, uint32_t length);

	MemoryDevice* getByAddress(uint32_t addr);
	sgemew::util::MemoryRanger* getByRanger(uint32_t addr);

private:
	std::list<sgemew::util::MemoryRanger*> *ranges;

};

}

}

#endif // SYSTEMMEMORY_H

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

#ifndef MEMORYDEVICE_H
#define MEMORYDEVICE_H

#include <cstdint>

namespace sgemew
{

namespace hardware
{

class MemoryDevice
{
public:
	MemoryDevice();
	MemoryDevice(uint32_t size);
	~MemoryDevice();
	virtual uint8_t read8(uint32_t addr);
	virtual uint16_t read16(uint32_t addr);
	virtual uint32_t read32(uint32_t addr);
	virtual uint64_t read64(uint32_t addr);

	virtual void write(uint32_t addr, uint8_t data);
	virtual void write(uint32_t addr, uint16_t data);
	virtual void write(uint32_t addr, uint32_t data);
	virtual void write(uint32_t addr, uint64_t data);

	virtual uint8_t &operator[](uint32_t addr);

private:
	bool initialized = false;
	uint32_t aSize;
	uint8_t *mem;
	virtual void initMemory(uint32_t size);

};

}

}

#endif // MEMORYDEVICE_H

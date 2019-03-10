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

#include "MemoryDevice.h"

namespace sgemew
{

namespace hardware
{

MemoryDevice::MemoryDevice()
{
}

MemoryDevice::MemoryDevice(uint32_t size)
{
	initMemory(size);
}

MemoryDevice::~MemoryDevice()
{
	if (initialized) { delete[] mem; }
}

uint8_t MemoryDevice::read8(uint32_t addr)
{
	return (*this)[addr];
}

uint16_t MemoryDevice::read16(uint32_t addr)
{
	uint16_t r = (*this)[addr] << 8;
	r |= (*this)[addr + 1];
	return r;
}

uint32_t MemoryDevice::read32(uint32_t addr)
{
	uint32_t r = (*this)[addr] << 24;
	r |= (*this)[addr + 1] << 16;
	r |= (*this)[addr + 2] << 8;
	r |= (*this)[addr + 3];
	return r;
}

uint64_t MemoryDevice::read64(uint32_t addr)
{
	uint64_t r = (uint64_t)(*this)[addr] << 56;
	r |= (uint64_t)(*this)[addr + 1] << 48;
	r |= (uint64_t)(*this)[addr + 2] << 40;
	r |= (uint64_t)(*this)[addr + 3] << 32;
	r |= (*this)[addr + 4] << 24;
	r |= (*this)[addr + 5] << 16;
	r |= (*this)[addr + 6] << 8;
	r |= (*this)[addr + 7];
	return r;
}

void MemoryDevice::write(uint32_t addr, uint8_t data)
{
	(*this)[addr] = data;
}

void MemoryDevice::write(uint32_t addr, uint16_t data)
{
	(*this)[addr] = 0xff & (data >> 8);
	(*this)[addr + 1] = 0xff & data;
}

void MemoryDevice::write(uint32_t addr, uint32_t data)
{
	(*this)[addr] = 0xff & (data >> 24);
	(*this)[addr + 1] = 0xff & (data >> 16);
	(*this)[addr + 2] = 0xff & (data >> 8);
	(*this)[addr + 3] = 0xff & data;
}

void MemoryDevice::write(uint32_t addr, uint64_t data)
{
	(*this)[addr] = 0xff & (data >> 56);
	(*this)[addr + 1] = 0xff & (data >> 48);
	(*this)[addr + 2] = 0xff & (data >> 40);
	(*this)[addr + 3] = 0xff & (data >> 32);
	(*this)[addr + 4] = 0xff & (data >> 24);
	(*this)[addr + 5] = 0xff & (data >> 16);
	(*this)[addr + 6] = 0xff & (data >> 8);
	(*this)[addr + 7] = 0xff & data;
}

uint8_t& MemoryDevice::operator [](uint32_t addr)
{
	return mem[addr];
}

void MemoryDevice::initMemory(uint32_t size)
{
	if (initialized) { return; }
	aSize = size;
	mem = new uint8_t[size];
	initialized = true;
}

}
}

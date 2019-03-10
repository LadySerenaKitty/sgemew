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

#ifndef MEMORYDEVICE_H
#define MEMORYDEVICE_H

#include <cstdint>

namespace sgemew
{

namespace hardware
{

/** Basic interface for devices with memory.
 * @class MemoryDevice
 * @author Kitty
 * @date 9 March 2019
 * @file MemoryDevice.h
 * @license Apache 2.0
 */
class MemoryDevice
{
public:
	MemoryDevice();
	/**
	 * Creates a device with the specified amount of memory.
	 * @param size Size of memory block to create.
	 */
	MemoryDevice(uint32_t size);
	~MemoryDevice();
	/**
	 * Reads an 8-bit number
	 * @param addr Address to be read
	 * @returns Value stored at specified address
	 */
	virtual uint8_t read8(uint32_t addr);
	/**
	 * Reads a 16-bit big-endian number
	 * @param addr Address to start reading
	 * @returns Value stored at specified address
	 */
	virtual uint16_t read16(uint32_t addr);
	/**
	 * Reads a 32-bit big-endian number
	 * @param addr Address to start reading
	 * @returns Value stored at specified address
	 */
	virtual uint32_t read32(uint32_t addr);
	/**
	 * Reads a 64-bit big-endian number
	 * @param addr Address to start reading
	 * @returns Value stored at specified address
	 */
	virtual uint64_t read64(uint32_t addr);

	/**
	 * Writes a big-endian number
	 * @param addr Address to write
	 * @param data Number to write
	 */
	virtual void write(uint32_t addr, uint8_t data);
	/**
	 * Writes a big-endian number
	 * @param addr Address to write
	 * @param data Number to write
	 */
	virtual void write(uint32_t addr, uint16_t data);
	/**
	 * Writes a big-endian number
	 * @param addr Address to write
	 * @param data Number to write
	 */
	virtual void write(uint32_t addr, uint32_t data);
	/**
	 * Writes a big-endian number
	 * @param addr Address to write
	 * @param data Number to write
	 */
	virtual void write(uint32_t addr, uint64_t data);

	/**
	 * Allows array-style access to memory block.
	 * @param addr Address to access
	 */
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

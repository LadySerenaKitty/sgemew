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

/** Access controller for system memory bus
 * @class SystemMemory
 * @author Kitty
 * @date 9 March 2019
 * @file SystemMemory.h
 */
class SystemMemory : public sgemew::hardware::MemoryDevice
{
public:
	SystemMemory();
	~SystemMemory();

	uint8_t& operator[](uint64_t addr);

	void add(sgemew::util::MemoryRanger *memranger);
	void addA(uint64_t start, uint64_t end, MemoryDevice *memdev);
	void addL(uint64_t start, uint64_t length, MemoryDevice *memdev);

	void createA(uint64_t start, uint64_t end);
	void createL(uint64_t start, uint64_t length);

	MemoryDevice* getByAddress(uint64_t addr);
	sgemew::util::MemoryRanger* getByRanger(uint64_t addr);

private:
	std::list<sgemew::util::MemoryRanger*> *ranges;

};

}

}

#endif // SYSTEMMEMORY_H

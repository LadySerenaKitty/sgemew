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

#ifndef MEMORYRANGER_H
#define MEMORYRANGER_H

#include "../hardware/MemoryDevice.h"
#include <cstdint>

namespace sgemew
{

namespace util
{

/** Helper for setting up memory segments
 * @class MemoryRanger
 * @author Kitty
 * @date 9 March 2019
 * @file MemoryRanger.h
 * @license Apache 2.0
 */
class MemoryRanger
{
public:
	MemoryRanger(uint32_t base, uint32_t length, sgemew::hardware::MemoryDevice *memdev);
	~MemoryRanger();

	uint32_t getBase();
	uint32_t getLength();
	uint32_t getEnd();

	bool isAddrInRange(uint32_t addr);
	sgemew::hardware::MemoryDevice *getMemory();

private:
	uint32_t b;
	uint32_t l;
	sgemew::hardware::MemoryDevice *md;
};

}

}

#endif // MEMORYRANGER_H

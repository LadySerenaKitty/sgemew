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

#include "MemoryRanger.h"

using namespace sgemew::util;

MemoryRanger::MemoryRanger(uint32_t base, uint32_t length, sgemew::hardware::MemoryDevice *memdev)
{
	b = base;
	l = length;
	md = memdev;
}

uint32_t MemoryRanger::getBase()
{
	return b;
}

uint32_t MemoryRanger::getLength()
{
	return l;
}

uint32_t MemoryRanger::getEnd()
{
	return b + l;
}

bool MemoryRanger::isAddrInRange(uint32_t addr)
{
	if (addr < getBase()) { return false; }
	if (addr > getEnd()) { return false; }
	return true;
}

sgemew::hardware::MemoryDevice *MemoryRanger::getMemory()
{
	return md;
}

MemoryRanger::~MemoryRanger()
{
}

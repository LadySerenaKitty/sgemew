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

#include "RegHelper.h"

using namespace sgemew::util;

RegHelper::RegHelper(uint64_t s, uint64_t t, uint64_t d)
{
	rs = s;
	rt = t;
	rd = d;
}

RegHelper::RegHelper()
{
	rs = 0;
	rt = 0;
	rd = 0;
}
RegHelper::~RegHelper()
{
}

uint8_t RegHelper::get8(uint64_t value) { return (uint8_t)(SIZE8 & value); }
uint16_t RegHelper::get16(uint64_t value) { return (uint16_t)(SIZE16 & value); }
uint32_t RegHelper::get32(uint64_t value) { return (uint32_t)(SIZE32 & value); }
uint64_t RegHelper::get64(uint64_t value) { return value; }

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

#ifndef REGHELPER_H
#define REGHELPER_H

#include <cstdint>
#include "../hardware/MipsIV.h"

namespace sgemew
{

namespace util
{

class RegHelper
{
public:
	RegHelper(uint64_t s, uint64_t t, uint64_t d);
	RegHelper();
	~RegHelper();

	uint64_t rs;
	uint64_t rt;
	uint64_t rd;

	uint8_t get8(uint64_t value);
	uint16_t get16(uint64_t value);
	uint32_t get32(uint64_t value);
	uint64_t get64(uint64_t value);
};

}

}

#endif // REGHELPER_H

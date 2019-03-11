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

#ifndef MIPSCPU_H
#define MIPSCPU_H

#include <cstdint>
#include "MipsIV.h"
#include "SystemMemory.h"

namespace sgemew
{

namespace hardware
{

class MipsCpu;

typedef void (*mipsfunc)(ARGS);

/** Implementation of a MIPS R10k processor (MIPS IV ISA)
 * @class MipsCpu
 * @author Kitty
 * @date 10 March 2019
 * @file MipsCpu.h
 */
class MipsCpu
{

public:
	SystemMemory *sm;

	MipsCpu(SystemMemory *memory);
	~MipsCpu();
	mipsfunc getInstruction(uint32_t data);
	void cycle();

private:
	uint64_t reg_gp[64];
	uint64_t reg_fp[64];
};


}

}

#endif // MIPSCPU_H

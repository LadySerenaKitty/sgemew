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

#ifndef MIPSINSTRUCTIONS_H
#define MIPSINSTRUCTIONS_H

#include <cstdint>
#include "../MipsCpu.h"

namespace sgemew
{

namespace hardware
{

namespace mips
{

class MipsInstructions
{
public:
	MipsInstructions();
	~MipsInstructions();

	static void nop(uint32_t data, MipsCpu* cpu);

	//{ Base Opcodes
	static void mspecial(uint32_t data, MipsCpu* cpu);
	static void mregimm(uint32_t data, MipsCpu* cpu);
	static void mj(uint32_t data, MipsCpu* cpu);
	static void mjal(uint32_t data, MipsCpu* cpu);
	static void mbeq(uint32_t data, MipsCpu* cpu);
	static void mbne(uint32_t data, MipsCpu* cpu);
	static void mblez(uint32_t data, MipsCpu* cpu);
	static void mbgtz(uint32_t data, MipsCpu* cpu);

	static void maddi(uint32_t data, MipsCpu* cpu);
	static void maddiu(uint32_t data, MipsCpu* cpu);
	static void mslti(uint32_t data, MipsCpu* cpu);
	static void msltiu(uint32_t data, MipsCpu* cpu);
	static void mandi(uint32_t data, MipsCpu* cpu);
	static void mori(uint32_t data, MipsCpu* cpu);
	static void mxori(uint32_t data, MipsCpu* cpu);
	static void mlui(uint32_t data, MipsCpu* cpu);

	static void mcop0(uint32_t data, MipsCpu* cpu);
	static void mcop1(uint32_t data, MipsCpu* cpu);
	static void mcop2(uint32_t data, MipsCpu* cpu);
	static void mcop1x(uint32_t data, MipsCpu* cpu);
	static void mbeql(uint32_t data, MipsCpu* cpu);
	static void mbnel(uint32_t data, MipsCpu* cpu);
	static void mblezl(uint32_t data, MipsCpu* cpu);
	static void mbgtzl(uint32_t data, MipsCpu* cpu);

	static void mdaddi(uint32_t data, MipsCpu* cpu);
	static void mdaddiu(uint32_t data, MipsCpu* cpu);
	static void mldl(uint32_t data, MipsCpu* cpu);
	static void mldr(uint32_t data, MipsCpu* cpu);

	static void mlb(uint32_t data, MipsCpu* cpu);
	static void mlh(uint32_t data, MipsCpu* cpu);
	static void mlwl(uint32_t data, MipsCpu* cpu);
	static void mlw(uint32_t data, MipsCpu* cpu);
	static void mlbu(uint32_t data, MipsCpu* cpu);
	static void mlhu(uint32_t data, MipsCpu* cpu);
	static void mlwr(uint32_t data, MipsCpu* cpu);
	static void mlwu(uint32_t data, MipsCpu* cpu);

	static void msb(uint32_t data, MipsCpu* cpu);
	static void msh(uint32_t data, MipsCpu* cpu);
	static void mswl(uint32_t data, MipsCpu* cpu);
	static void msw(uint32_t data, MipsCpu* cpu);
	static void msdl(uint32_t data, MipsCpu* cpu);
	static void msdr(uint32_t data, MipsCpu* cpu);
	static void mswr(uint32_t data, MipsCpu* cpu);

	static void mll(uint32_t data, MipsCpu* cpu);
	static void mlwc1(uint32_t data, MipsCpu* cpu);
	static void mlwc2(uint32_t data, MipsCpu* cpu);
	static void mpref(uint32_t data, MipsCpu* cpu);
	static void mlld(uint32_t data, MipsCpu* cpu);
	static void mldc1(uint32_t data, MipsCpu* cpu);
	static void mldc2(uint32_t data, MipsCpu* cpu);
	static void mld(uint32_t data, MipsCpu* cpu);

	static void msc(uint32_t data, MipsCpu* cpu);
	static void mswc1(uint32_t data, MipsCpu* cpu);
	static void mswc2(uint32_t data, MipsCpu* cpu);
	static void mscd(uint32_t data, MipsCpu* cpu);
	static void msdc1(uint32_t data, MipsCpu* cpu);
	static void msdc2(uint32_t data, MipsCpu* cpu);
	static void msd(uint32_t data, MipsCpu* cpu);
	//}

	//{ special functions
	static void msll(uint32_t data, MipsCpu* cpu);
	static void mmovci(uint32_t data, MipsCpu* cpu);
	static void msrl(uint32_t data, MipsCpu* cpu);
	static void msra(uint32_t data, MipsCpu* cpu);
	static void msllv(uint32_t data, MipsCpu* cpu);
	static void msrlv(uint32_t data, MipsCpu* cpu);
	static void msrav(uint32_t data, MipsCpu* cpu);

	static void mjr(uint32_t data, MipsCpu* cpu);
	static void mjalr(uint32_t data, MipsCpu* cpu);
	static void mmovz(uint32_t data, MipsCpu* cpu);
	static void mmovn(uint32_t data, MipsCpu* cpu);
	static void msyscall(uint32_t data, MipsCpu* cpu);
	static void mbreak(uint32_t data, MipsCpu* cpu);
	static void msync(uint32_t data, MipsCpu* cpu);

	static void mmfhi(uint32_t data, MipsCpu* cpu);
	static void mmthi(uint32_t data, MipsCpu* cpu);
	static void mmflo(uint32_t data, MipsCpu* cpu);
	static void mmtlo(uint32_t data, MipsCpu* cpu);
	static void mdsllv(uint32_t data, MipsCpu* cpu);
	static void mdsrlv(uint32_t data, MipsCpu* cpu);
	static void mdsrav(uint32_t data, MipsCpu* cpu);

	static void mmult(uint32_t data, MipsCpu* cpu);
	static void mmultu(uint32_t data, MipsCpu* cpu);
	static void mdiv(uint32_t data, MipsCpu* cpu);
	static void mdivu(uint32_t data, MipsCpu* cpu);
	static void mdmult(uint32_t data, MipsCpu* cpu);
	static void mdmultu(uint32_t data, MipsCpu* cpu);
	static void mddiv(uint32_t data, MipsCpu* cpu);
	static void mddivu(uint32_t data, MipsCpu* cpu);

	static void madd(uint32_t data, MipsCpu* cpu);
	static void maddu(uint32_t data, MipsCpu* cpu);
	static void msub(uint32_t data, MipsCpu* cpu);
	static void msubu(uint32_t data, MipsCpu* cpu);
	static void mand(uint32_t data, MipsCpu* cpu);
	static void mor(uint32_t data, MipsCpu* cpu);
	static void mxor(uint32_t data, MipsCpu* cpu);
	static void mnor(uint32_t data, MipsCpu* cpu);

	static void mslt(uint32_t data, MipsCpu* cpu);
	static void msltu(uint32_t data, MipsCpu* cpu);
	static void mdadd(uint32_t data, MipsCpu* cpu);
	static void mdaddu(uint32_t data, MipsCpu* cpu);
	static void mdsub(uint32_t data, MipsCpu* cpu);
	static void mdsubu(uint32_t data, MipsCpu* cpu);

	static void mtge(uint32_t data, MipsCpu* cpu);
	static void mtgeu(uint32_t data, MipsCpu* cpu);
	static void mtlt(uint32_t data, MipsCpu* cpu);
	static void mtltu(uint32_t data, MipsCpu* cpu);
	static void mteq(uint32_t data, MipsCpu* cpu);
	static void mtne(uint32_t data, MipsCpu* cpu);

	static void mdsll(uint32_t data, MipsCpu* cpu);
	static void mdsrl(uint32_t data, MipsCpu* cpu);
	static void mdsra(uint32_t data, MipsCpu* cpu);
	static void mdsll32(uint32_t data, MipsCpu* cpu);
	static void mdsrl32(uint32_t data, MipsCpu* cpu);
	static void mdsra32(uint32_t data, MipsCpu* cpu);
	//}

	//{ regimm functions
	static void mbltz(uint32_t data, MipsCpu* cpu);
	static void mbgez(uint32_t data, MipsCpu* cpu);
	static void mbltzl(uint32_t data, MipsCpu* cpu);
	static void mbgezl(uint32_t data, MipsCpu* cpu);

	static void mtgei(uint32_t data, MipsCpu* cpu);
	static void mtgeiu(uint32_t data, MipsCpu* cpu);
	static void mtlti(uint32_t data, MipsCpu* cpu);
	static void mtltiu(uint32_t data, MipsCpu* cpu);
	static void mteqi(uint32_t data, MipsCpu* cpu);
	static void mtnei(uint32_t data, MipsCpu* cpu);

	static void mbltzal(uint32_t data, MipsCpu* cpu);
	static void mbgezal(uint32_t data, MipsCpu* cpu);
	static void mbltzall(uint32_t data, MipsCpu* cpu);
	static void mbgezall(uint32_t data, MipsCpu* cpu);
	//}

};

}

}

}

#endif // MIPSINSTRUCTIONS_H

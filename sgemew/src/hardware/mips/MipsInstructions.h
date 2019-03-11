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
#include "../MipsIV.h"
#include "../MipsCpu.h"

namespace sgemew
{

namespace hardware
{

namespace mips
{

/** Implementations for MIPS instructions
 * @class MipsInstructions
 * @author Kitty
 * @date 10 March 2019
 * @file MipsInstructions.h
 */
class MipsInstructions
{
public:
	MipsInstructions();
	~MipsInstructions();

	static void nop(ARGS);

	static void mspecial(ARGS);
	static void mregimm(ARGS);
	static void mj(ARGS);
	static void mjal(ARGS);
	static void mbeq(ARGS);
	static void mbne(ARGS);
	static void mblez(ARGS);
	static void mbgtz(ARGS);

	static void maddi(ARGS);
	static void maddiu(ARGS);
	static void mslti(ARGS);
	static void msltiu(ARGS);
	static void mandi(ARGS);
	static void mori(ARGS);
	static void mxori(ARGS);
	static void mlui(ARGS);

	static void mcop0(ARGS);
	static void mcop1(ARGS);
	static void mcop2(ARGS);
	static void mcop1x(ARGS);
	static void mbeql(ARGS);
	static void mbnel(ARGS);
	static void mblezl(ARGS);
	static void mbgtzl(ARGS);

	static void mdaddi(ARGS);
	static void mdaddiu(ARGS);
	static void mldl(ARGS);
	static void mldr(ARGS);

	static void mlb(ARGS);
	static void mlh(ARGS);
	static void mlwl(ARGS);
	static void mlw(ARGS);
	static void mlbu(ARGS);
	static void mlhu(ARGS);
	static void mlwr(ARGS);
	static void mlwu(ARGS);

	static void msb(ARGS);
	static void msh(ARGS);
	static void mswl(ARGS);
	static void msw(ARGS);
	static void msdl(ARGS);
	static void msdr(ARGS);
	static void mswr(ARGS);

	static void mll(ARGS);
	static void mlwc1(ARGS);
	static void mlwc2(ARGS);
	static void mpref(ARGS);
	static void mlld(ARGS);
	static void mldc1(ARGS);
	static void mldc2(ARGS);
	static void mld(ARGS);

	static void msc(ARGS);
	static void mswc1(ARGS);
	static void mswc2(ARGS);
	static void mscd(ARGS);
	static void msdc1(ARGS);
	static void msdc2(ARGS);
	static void msd(ARGS);

	static void msll(ARGS);
	static void mmovci(ARGS);
	static void msrl(ARGS);
	static void msra(ARGS);
	static void msllv(ARGS);
	static void msrlv(ARGS);
	static void msrav(ARGS);

	static void mjr(ARGS);
	static void mjalr(ARGS);
	static void mmovz(ARGS);
	static void mmovn(ARGS);
	static void msyscall(ARGS);
	static void mbreak(ARGS);
	static void msync(ARGS);

	static void mmfhi(ARGS);
	static void mmthi(ARGS);
	static void mmflo(ARGS);
	static void mmtlo(ARGS);
	static void mdsllv(ARGS);
	static void mdsrlv(ARGS);
	static void mdsrav(ARGS);

	static void mmult(ARGS);
	static void mmultu(ARGS);
	static void mdiv(ARGS);
	static void mdivu(ARGS);
	static void mdmult(ARGS);
	static void mdmultu(ARGS);
	static void mddiv(ARGS);
	static void mddivu(ARGS);

	static void madd(ARGS);
	static void maddu(ARGS);
	static void msub(ARGS);
	static void msubu(ARGS);
	static void mand(ARGS);
	static void mor(ARGS);
	static void mxor(ARGS);
	static void mnor(ARGS);

	static void mslt(ARGS);
	static void msltu(ARGS);
	static void mdadd(ARGS);
	static void mdaddu(ARGS);
	static void mdsub(ARGS);
	static void mdsubu(ARGS);

	static void mtge(ARGS);
	static void mtgeu(ARGS);
	static void mtlt(ARGS);
	static void mtltu(ARGS);
	static void mteq(ARGS);
	static void mtne(ARGS);

	static void mdsll(ARGS);
	static void mdsrl(ARGS);
	static void mdsra(ARGS);
	static void mdsll32(ARGS);
	static void mdsrl32(ARGS);
	static void mdsra32(ARGS);

	static void mbltz(ARGS);
	static void mbgez(ARGS);
	static void mbltzl(ARGS);
	static void mbgezl(ARGS);

	static void mtgei(ARGS);
	static void mtgeiu(ARGS);
	static void mtlti(ARGS);
	static void mtltiu(ARGS);
	static void mteqi(ARGS);
	static void mtnei(ARGS);

	static void mbltzal(ARGS);
	static void mbgezal(ARGS);
	static void mbltzall(ARGS);
	static void mbgezall(ARGS);

};

}

}

}

#endif // MIPSINSTRUCTIONS_H

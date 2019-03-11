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

#include "MipsInstructions.h"

using namespace sgemew::hardware::mips;

MipsInstructions::MipsInstructions()
{
}

MipsInstructions::~MipsInstructions()
{
}

void MipsInstructions::nop(ARGS)
{
	return;
}

//{ Base Opcodes
void MipsInstructions::mspecial(ARGS)
{
	return;
}

void MipsInstructions::mregimm(ARGS)
{
	return;
}

void MipsInstructions::mj(ARGS)
{
	return;
}

void MipsInstructions::mjal(ARGS)
{
	return;
}

void MipsInstructions::mbeq(ARGS)
{ // page 44
	// TODO: figure out how to implement branching
	return;
}

void MipsInstructions::mbne(ARGS)
{
	return;
}

void MipsInstructions::mblez(ARGS)
{
	return;
}

void MipsInstructions::mbgtz(ARGS)
{
	return;
}


void MipsInstructions::maddi(ARGS)
{ // page 39
	int64_t a = rh->get32(rh->rs) + rh->get16(data);
	if (0xffffffff00000000 & a)
	{ // TODO: signal "IntegerOverflow"
	}
	rh->rt = rh->get32(a);
	return;
}

void MipsInstructions::maddiu(ARGS)
{ // page 40
	int64_t a = rh->get32(rh->rs) + rh->get16(data);
	rh->rt = rh->get32(a);
	return;
}

void MipsInstructions::mslti(ARGS)
{
	return;
}

void MipsInstructions::msltiu(ARGS)
{
	return;
}

void MipsInstructions::mandi(ARGS)
{ // page 43
	int64_t a = rh->rs & rh->get16(rh->rt);
	rh->rd = a;
	return;
}

void MipsInstructions::mori(ARGS)
{
	return;
}

void MipsInstructions::mxori(ARGS)
{
	return;
}

void MipsInstructions::mlui(ARGS)
{
	return;
}


void MipsInstructions::mcop0(ARGS)
{
	return;
}

void MipsInstructions::mcop1(ARGS)
{
	return;
}

void MipsInstructions::mcop2(ARGS)
{
	return;
}

void MipsInstructions::mcop1x(ARGS)
{
	return;
}

void MipsInstructions::mbeql(ARGS)
{
	return;
}

void MipsInstructions::mbnel(ARGS)
{
	return;
}

void MipsInstructions::mblezl(ARGS)
{
	return;
}

void MipsInstructions::mbgtzl(ARGS)
{
	return;
}


void MipsInstructions::mdaddi(ARGS)
{ // page 65
	rh->rt = rh->rs + rh->get16(data);
	return;
}

void MipsInstructions::mdaddiu(ARGS)
{ // page 66
	rh->rt = rh->rs + rh->get16(data);
	return;
}

void MipsInstructions::mldl(ARGS)
{
	return;
}

void MipsInstructions::mldr(ARGS)
{
	return;
}


void MipsInstructions::mlb(ARGS)
{
	return;
}

void MipsInstructions::mlh(ARGS)
{
	return;
}

void MipsInstructions::mlwl(ARGS)
{
	return;
}

void MipsInstructions::mlw(ARGS)
{
	return;
}

void MipsInstructions::mlbu(ARGS)
{
	return;
}

void MipsInstructions::mlhu(ARGS)
{
	return;
}

void MipsInstructions::mlwr(ARGS)
{
	return;
}

void MipsInstructions::mlwu(ARGS)
{
	return;
}


void MipsInstructions::msb(ARGS)
{
	return;
}

void MipsInstructions::msh(ARGS)
{
	return;
}

void MipsInstructions::mswl(ARGS)
{
	return;
}

void MipsInstructions::msw(ARGS)
{
	return;
}

void MipsInstructions::msdl(ARGS)
{
	return;
}

void MipsInstructions::msdr(ARGS)
{
	return;
}

void MipsInstructions::mswr(ARGS)
{
	return;
}


void MipsInstructions::mll(ARGS)
{
	return;
}

void MipsInstructions::mlwc1(ARGS)
{
	return;
}

void MipsInstructions::mlwc2(ARGS)
{
	return;
}

void MipsInstructions::mpref(ARGS)
{
	return;
}

void MipsInstructions::mlld(ARGS)
{
	return;
}

void MipsInstructions::mldc1(ARGS)
{
	return;
}

void MipsInstructions::mldc2(ARGS)
{
	return;
}

void MipsInstructions::mld(ARGS)
{
	return;
}


void MipsInstructions::msc(ARGS)
{
	return;
}

void MipsInstructions::mswc1(ARGS)
{
	return;
}

void MipsInstructions::mswc2(ARGS)
{
	return;
}

void MipsInstructions::mscd(ARGS)
{
	return;
}

void MipsInstructions::msdc1(ARGS)
{
	return;
}

void MipsInstructions::msdc2(ARGS)
{
	return;
}

void MipsInstructions::msd(ARGS)
{
	return;
}

//}

//{ special functions
void MipsInstructions::msll(ARGS)
{
	return;
}

void MipsInstructions::mmovci(ARGS)
{
	return;
}

void MipsInstructions::msrl(ARGS)
{
	return;
}

void MipsInstructions::msra(ARGS)
{
	return;
}

void MipsInstructions::msllv(ARGS)
{
	return;
}

void MipsInstructions::msrlv(ARGS)
{
	return;
}

void MipsInstructions::msrav(ARGS)
{
	return;
}


void MipsInstructions::mjr(ARGS)
{
	return;
}

void MipsInstructions::mjalr(ARGS)
{
	return;
}

void MipsInstructions::mmovz(ARGS)
{
	return;
}

void MipsInstructions::mmovn(ARGS)
{
	return;
}

void MipsInstructions::msyscall(ARGS)
{
	return;
}

void MipsInstructions::mbreak(ARGS)
{ // page 62
	// TODO: signal "Breakpoint"
	return;
}

void MipsInstructions::msync(ARGS)
{
	return;
}


void MipsInstructions::mmfhi(ARGS)
{
	return;
}

void MipsInstructions::mmthi(ARGS)
{
	return;
}

void MipsInstructions::mmflo(ARGS)
{
	return;
}

void MipsInstructions::mmtlo(ARGS)
{
	return;
}

void MipsInstructions::mdsllv(ARGS)
{ // page 77
	rh->rd = rh->rt << rh->rs;
	return;
}

void MipsInstructions::mdsrlv(ARGS)
{ // page 83
	rh->rd = rh->rt >> rh>rs;
	return;
}

void MipsInstructions::mdsrav(ARGS)
{ // page 80
	rh->rd = rh->rt >> rh->rs;
	return;
}


void MipsInstructions::mmult(ARGS)
{
	return;
}

void MipsInstructions::mmultu(ARGS)
{
	return;
}

void MipsInstructions::mdiv(ARGS)
{ // page 70
	int64_t lo = (int32_t)rh->get32(rh->rs) / (int32_t)rh->get32(rh->rt);
	int64_t hi = (int32_t)rh->get32(rh->rs) % (int32_t)rh->get32(rh->rt);
	// TODO: figure out LO and HI
	return;
}

void MipsInstructions::mdivu(ARGS)
{ // page 72
	uint64_t lo = rh->get32(rh->rs) / rh->get32(rh->rt);
	uint64_t hi = rh->get32(rh->rs) % rh->get32(rh->rt);
	return;
}

void MipsInstructions::mdmult(ARGS)
{ // page 73
	// TODO: 128-bit multiplication?????
	int64_t lo = (int64_t)rh->rs * (int64_t)rh->rt;
	int64_t hi = (int64_t)rh->rs * (int64_t)rh->rt;
	return;
}

void MipsInstructions::mdmultu(ARGS)
{ // page 74
	// TODO: 128-bit multiplication?????
	uint64_t lo = rh->rs * rh->rt;
	uint64_t hi = rh->rs * rh->rt;
	return;
}

void MipsInstructions::mddiv(ARGS)
{ // page 68
	int64_t lo = (int64_t)rh->rs / (int64_t)rh->rt;
	int64_t hi = (int64_t)rh->rd % (int64_t)rh->rt;
	// TODO: figure out LO and HI
	return;
}

void MipsInstructions::mddivu(ARGS)
{ // page 69
	uint64_t lo = rh->rs / rh->rt;
	uint64_t hi = rh->rs % rh->rt;
	// TODO: figure out LO and HI
	return;
}


void MipsInstructions::madd(ARGS)
{ // page 38
	int64_t a = rh->get32(rh->rs) + rh->get32(rh->rt);
	if (0xffffffff00000000 & a)
	{ // TODO: signal "IntegerOverflow"
	}
	rh->rd = rh->get32(a);
	return;
}

void MipsInstructions::maddu(ARGS)
{ // page 41
	int64_t a = rh->get32(rh->rs) + rh->get32(rh->rt);
	rh->rd = rh->get32(a);
	return;
}

void MipsInstructions::msub(ARGS)
{
	return;
}

void MipsInstructions::msubu(ARGS)
{
	return;
}

void MipsInstructions::mand(ARGS)
{ // page 42
	int64_t a = rh->rs & rh->rt;
	rh->rd = a;
	return;
}

void MipsInstructions::mor(ARGS)
{
	return;
}

void MipsInstructions::mxor(ARGS)
{
	return;
}

void MipsInstructions::mnor(ARGS)
{
	return;
}


void MipsInstructions::mslt(ARGS)
{
	return;
}

void MipsInstructions::msltu(ARGS)
{
	return;
}

void MipsInstructions::mdadd(ARGS)
{ // page 64
	rh->rd = rh->rs + rh->rt;
	// side-note, we should be throwing an "IntegerOverflow"
	// but we can't because we can't detect this
	return;
}

void MipsInstructions::mdaddu(ARGS)
{ // page 67
	rh->rt = rh->rs + rh->rt;
	return;
}

void MipsInstructions::mdsub(ARGS)
{
	return;
}

void MipsInstructions::mdsubu(ARGS)
{
	return;
}


void MipsInstructions::mtge(ARGS)
{
	return;
}

void MipsInstructions::mtgeu(ARGS)
{
	return;
}

void MipsInstructions::mtlt(ARGS)
{
	return;
}

void MipsInstructions::mtltu(ARGS)
{
	return;
}

void MipsInstructions::mteq(ARGS)
{
	return;
}

void MipsInstructions::mtne(ARGS)
{
	return;
}


void MipsInstructions::mdsll(ARGS)
{ // page 75
	rh->rd = rh->rt << VALUE_SA(data);
	return;
}

void MipsInstructions::mdsrl(ARGS)
{ // page 81
	rh->rd = rh->rt >> VALUE_SA(data);
	return;
}

void MipsInstructions::mdsra(ARGS)
{ // page 78
	rh->rd = rh->rt >> VALUE_SA(data);
	return;
}

void MipsInstructions::mdsll32(ARGS)
{ // page 76
	rh->rd = rh->rt << (VALUE_SA(data) + 32);
	return;
}

void MipsInstructions::mdsrl32(ARGS)
{ // page 82
	rh->rd = rh->rt >> (VALUE_SA(data) + 32);
	return;
}

void MipsInstructions::mdsra32(ARGS)
{ // page 79
	rh->rd = rh->rt >> (VALUE_SA(data) + 32);
	return;
}

//}

//{ regimm functions
void MipsInstructions::mbltz(ARGS)
{
	return;
}

void MipsInstructions::mbgez(ARGS)
{
	return;
}

void MipsInstructions::mbltzl(ARGS)
{
	return;
}

void MipsInstructions::mbgezl(ARGS)
{
	return;
}


void MipsInstructions::mtgei(ARGS)
{
	return;
}

void MipsInstructions::mtgeiu(ARGS)
{
	return;
}

void MipsInstructions::mtlti(ARGS)
{
	return;
}

void MipsInstructions::mtltiu(ARGS)
{
	return;
}

void MipsInstructions::mteqi(ARGS)
{
	return;
}

void MipsInstructions::mtnei(ARGS)
{
	return;
}


void MipsInstructions::mbltzal(ARGS)
{
	return;
}

void MipsInstructions::mbgezal(ARGS)
{
	return;
}

void MipsInstructions::mbltzall(ARGS)
{
	return;
}

void MipsInstructions::mbgezall(ARGS)
{
	return;
}

//}

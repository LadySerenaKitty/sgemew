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
{ // page 86
	//uint32_t addr = (0x3ffffff & data) << 2;
	// TODO: make effective target address
	// better understand this documentation
	return;
}

void MipsInstructions::mjal(ARGS)
{ // page 87
	return;
}

/**
 * @todo figure out how to implement branching
 */
void MipsInstructions::mbeq(ARGS)
{ // page 44
	// TODO: figure out how to implement branching
	return;
}

void MipsInstructions::mbne(ARGS)
{ // page 60
	return;
}

void MipsInstructions::mblez(ARGS)
{ // page 53
	return;
}

void MipsInstructions::mbgtz(ARGS)
{ // page 51
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
{ // page 153
	rh->rd = ((int64_t)rh->rs < (int64_t)rh->get16(data))?1:0;
	return;
}

void MipsInstructions::msltiu(ARGS)
{ // page 154
	rh->rd = (rh->rs < rh->rt)?1:0;
	return;
}

void MipsInstructions::mandi(ARGS)
{ // page 43
	int64_t a = rh->rs & rh->get16(rh->rt);
	rh->rd = a;
	return;
}

void MipsInstructions::mori(ARGS)
{ // page 129
	rh->rt = rh->rs | rh->get16(data);
	return;
}

void MipsInstructions::mxori(ARGS)
{ // page 189
	rh->rd = rh->rs ^ rh->get16(data);
	return;
}

void MipsInstructions::mlui(ARGS)
{ // page 107
	return;
}


void MipsInstructions::mcop0(ARGS)
{ // page 63
	return;
}

void MipsInstructions::mcop1(ARGS)
{ // page 63
	return;
}

void MipsInstructions::mcop2(ARGS)
{ // page 63
	return;
}

void MipsInstructions::mcop1x(ARGS)
{ // page 63
	return;
}

void MipsInstructions::mbeql(ARGS)
{ // page 45
	return;
}

void MipsInstructions::mbnel(ARGS)
{ // page 61
	return;
}

void MipsInstructions::mblezl(ARGS)
{ // page 54
	return;
}

void MipsInstructions::mbgtzl(ARGS)
{ // page 52
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
{ // pag 95
	return;
}

void MipsInstructions::mldr(ARGS)
{ // page 98
	return;
}


void MipsInstructions::mlb(ARGS)
{ // page 90 (requires memory)
	return;
}

void MipsInstructions::mlh(ARGS)
{ // pge 101
	return;
}

void MipsInstructions::mlwl(ARGS)
{ // page 111
	return;
}

void MipsInstructions::mlw(ARGS)
{ // page 108
	return;
}

void MipsInstructions::mlbu(ARGS)
{ // page 91
	return;
}

void MipsInstructions::mlhu(ARGS)
{ // page 102
	return;
}

void MipsInstructions::mlwr(ARGS)
{ // page 114
	return;
}

void MipsInstructions::mlwu(ARGS)
{ // page 118
	return;
}


void MipsInstructions::msb(ARGS)
{ // page 133
	return;
}

void MipsInstructions::msh(ARGS)
{ // page 149
	return;
}

void MipsInstructions::mswl(ARGS)
{ // page 165
	return;
}

void MipsInstructions::msw(ARGS)
{ // page 162
	return;
}

void MipsInstructions::msdl(ARGS)
{ // page 143
	return;
}

void MipsInstructions::msdr(ARGS)
{ // page 146
	return;
}

void MipsInstructions::mswr(ARGS)
{ // page 168
	return;
}


void MipsInstructions::mll(ARGS)
{ // page 103
	return;
}

void MipsInstructions::mlwc1(ARGS)
{ // page 109
	return;
}

void MipsInstructions::mlwc2(ARGS)
{ // page 109
	return;
}

void MipsInstructions::mpref(ARGS)
{ // page 130
	return;
}

void MipsInstructions::mlld(ARGS)
{ // page 105
	return;
}

void MipsInstructions::mldc1(ARGS)
{ // page 93
	return;
}

void MipsInstructions::mldc2(ARGS)
{ // page 93
	return;
}

void MipsInstructions::mld(ARGS)
{ // page 92
	return;
}


void MipsInstructions::msc(ARGS)
{ // page 134
	return;
}

void MipsInstructions::mswc1(ARGS)
{ // page 163
	return;
}

void MipsInstructions::mswc2(ARGS)
{ // page 163
	return;
}

void MipsInstructions::mscd(ARGS)
{ // page 137
	return;
}

void MipsInstructions::msdc1(ARGS)
{ // page 141
	return;
}

void MipsInstructions::msdc2(ARGS)
{ // page 141
	return;
}

void MipsInstructions::msd(ARGS)
{ // page 140
	return;
}

//}

//{ special functions
void MipsInstructions::msll(ARGS)
{ // page 150
	rh->rd = rh->get32(rh->rt << VALUE_SA(data));
	return;
}

void MipsInstructions::mmovci(ARGS)
{ // page 277
	// throws "CoprocessorUnusable"
	return;
}

void MipsInstructions::msrl(ARGS)
{ // page 158
	rh->rd = rh->rt >> VALUE_SA(data);
	return;
}

void MipsInstructions::msra(ARGS)
{ // page 156
	rh->rt = rh->rt >> VALUE_SA(data);
	return;
}

void MipsInstructions::msllv(ARGS)
{ // page 151
	rh->rd = rh->get32(rh->rt << rh->rs);
	return;
}

void MipsInstructions::msrlv(ARGS)
{ // page 159
	rh->rd = rh->rt >> rh->rs;
	return;
}

void MipsInstructions::msrav(ARGS)
{ // page 157
	rh->rd = rh->rt >> rh->rs;
	return;
}


void MipsInstructions::mjr(ARGS)
{ // page 89
	return;
}

void MipsInstructions::mjalr(ARGS)
{ // page 88
	return;
}

void MipsInstructions::mmovz(ARGS)
{ // page 122
	if (rh->rt == 0)
	{
		rh->rd = rh->rs;
	}
	return;
}

void MipsInstructions::mmovn(ARGS)
{ // page 121
	if (rh->rt != 0)
	{
		rh->rd = rh->rs;
	}
	return;
}

void MipsInstructions::msyscall(ARGS)
{ // page 175
	// throws "SystemCall"
	return;
}

void MipsInstructions::mbreak(ARGS)
{ // page 62
	// TODO: signal "Breakpoint"
	return;
}

void MipsInstructions::msync(ARGS)
{ // page 171
	return;
}


void MipsInstructions::mmfhi(ARGS)
{ // page 119
	return;
}

void MipsInstructions::mmthi(ARGS)
{ // page 123
	return;
}

void MipsInstructions::mmflo(ARGS)
{ // page 120
	return;
}

void MipsInstructions::mmtlo(ARGS)
{ // page 124
	return;
}

void MipsInstructions::mdsllv(ARGS)
{ // page 77
	rh->rd = rh->rt << rh->rs;
	return;
}

void MipsInstructions::mdsrlv(ARGS)
{ // page 83
	rh->rd = rh->rt >> rh->rs;
	return;
}

void MipsInstructions::mdsrav(ARGS)
{ // page 80
	rh->rd = rh->rt >> rh->rs;
	return;
}


void MipsInstructions::mmult(ARGS)
{ // page 125
	int64_t tmp = (int32_t)rh->get32(rh->rs) * (int32_t)rh->get32(rh->rt);
	int32_t lo = (int32_t)rh->get32(tmp);
	int32_t hi = (int32_t)rh->get32(tmp >> 32);
	return;
}

void MipsInstructions::mmultu(ARGS)
{ // page 126
	uint64_t tmp = rh->get32(rh->rs) * rh->get32(rh->rt);
	uint32_t lo = rh->get32(tmp);
	uint32_t hi = rh->get32(tmp >> 32);
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
{ // page 160
	rh->rd = rh->get32((int64_t)rh->rs - (int64_t)rh->rt);
	return;
}

void MipsInstructions::msubu(ARGS)
{ // page 161
	rh->rd = rh->get32(rh->rs - rh->rt);
	return;
}

void MipsInstructions::mand(ARGS)
{ // page 42
	int64_t a = rh->rs & rh->rt;
	rh->rd = a;
	return;
}

void MipsInstructions::mor(ARGS)
{ // page 128
	rh->rd = rh->rs | rh->rt;
	return;
}

void MipsInstructions::mxor(ARGS)
{ // page 188
	rh->rd = rh->rs ^ rh->rt;
	return;
}

void MipsInstructions::mnor(ARGS)
{ // page 127
	rh->rd = ~(rh->rs | rh->rt);
	return;
}


void MipsInstructions::mslt(ARGS)
{ // page 152
	rh->rd = ((int64_t)rh->rs < (int64_t)rh->rt)?1:0;
	return;
}

void MipsInstructions::msltu(ARGS)
{ // page 155
	rh->rd = (rh->rs < rh->rt)?1:0;
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
{ // page 84
	rh->rd = (int64_t)rh->rs - (int64_t)rh->rt;
	return;
}

void MipsInstructions::mdsubu(ARGS)
{ // page 85
	rh->rd = rh->rs - rh->rt;
	return;
}


void MipsInstructions::mtge(ARGS)
{ // page 178
	return;
}

void MipsInstructions::mtgeu(ARGS)
{ // page 181
	return;
}

void MipsInstructions::mtlt(ARGS)
{ // page 182
	return;
}

void MipsInstructions::mtltu(ARGS)
{ // page 185
	return;
}

void MipsInstructions::mteq(ARGS)
{ // page 176
	// throws "Trap"
	return;
}

void MipsInstructions::mtne(ARGS)
{ // page 186
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
{ // page 55
	return;
}

void MipsInstructions::mbgez(ARGS)
{ // page 46
	return;
}

void MipsInstructions::mbltzl(ARGS)
{ // page 59
	return;
}

void MipsInstructions::mbgezl(ARGS)
{ // page 50
	return;
}


void MipsInstructions::mtgei(ARGS)
{ // page 179
	return;
}

void MipsInstructions::mtgeiu(ARGS)
{ // page 180
	return;
}

void MipsInstructions::mtlti(ARGS)
{ // page 183
	return;
}

void MipsInstructions::mtltiu(ARGS)
{ // page 184
	return;
}

void MipsInstructions::mteqi(ARGS)
{ // page 177
	return;
}

void MipsInstructions::mtnei(ARGS)
{ // page 187
	return;
}


void MipsInstructions::mbltzal(ARGS)
{ // page 56
	return;
}

void MipsInstructions::mbgezal(ARGS)
{ // page 47
	return;
}

void MipsInstructions::mbltzall(ARGS)
{ // page 57
	return;
}

void MipsInstructions::mbgezall(ARGS)
{ // page 48
	return;
}

//}

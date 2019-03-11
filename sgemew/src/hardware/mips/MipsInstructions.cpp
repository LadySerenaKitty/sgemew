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

void MipsInstructions::madd(ARGS)
{ // page 38
	int64_t a = rg->get32(rg->rs) + rg->get32(rg->rt);
	if (0xffffffff00000000 & a)
	{ // TODO: signal "IntegerOverflow"
	}
	rg->rd = rg->get32(a);
	return;
}

void MipsInstructions::maddi(ARGS)
{ // page 39
	int64_t a = rg->get32(rg->rs) + rg->get16(data);
	if (0xffffffff00000000 & a)
	{ // TODO: signal "IntegerOverflow"
	}
	rg->rt = rg->get32(a);
	return;
}

void MipsInstructions::maddiu(ARGS)
{ // page 40
	int64_t a = rg->get32(rg->rs) + rg->get16(data);
	rg->rt = rg->get32(a);
	return;
}

void MipsInstructions::maddu(ARGS)
{ // page 41
	int64_t a = rg->get32(rg->rs) + rg->get32(rg->rt);
	rg->rd = rg->get32(a);
	return;
}

void MipsInstructions::mand(ARGS)
{ // page 42
	int64_t a = rg->rs & rg->rt;
	rg->rd = a;
	return;
}

void MipsInstructions::mandi(ARGS)
{ // page 43
	int64_t a = rg->rs & rg->get16(rg->rt);
	rg->rd = a;
	return;
}

void MipsInstructions::mbeq(ARGS)
{ // page 44
	// TODO: figure out how to implement branching
	return;
}

void MipsInstructions::mbeql(ARGS)
{ // page 45
	return;
}

void MipsInstructions::mbgez(ARGS)
{ // page 46
	return;
}

void MipsInstructions::mbgezal(ARGS)
{ // page 47
	return;
}

void MipsInstructions::mbgezall(ARGS)
{ // page 48
	return;
}

void MipsInstructions::mbgezl(ARGS)
{ // page 50
	return;
}

void MipsInstructions::mbgtz(ARGS)
{ // page 51
	return;
}

void MipsInstructions::mbgtzl(ARGS)
{ // page 52
	return;
}

void MipsInstructions::mblez(ARGS)
{ // page 53
	return;
}

void MipsInstructions::mblezl(ARGS)
{ // page 54
	return;
}

void MipsInstructions::mbltz(ARGS)
{ // page 55
	return;
}

void MipsInstructions::mbltzal(ARGS)
{ // page 56
	return;
}

void MipsInstructions::mbltzall(ARGS)
{ // page 57
	return;
}

void MipsInstructions::mbltzl(ARGS)
{ // page 59
	return;
}

void MipsInstructions::mbne(ARGS)
{ // page 60
	return;
}

void MipsInstructions::mbnel(ARGS)
{ // page 61
	return;
}

void MipsInstructions::mbreak(ARGS)
{ // page 62
	// TODO: signal "Breakpoint"
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

void MipsInstructions::mdadd(ARGS)
{ // page 64
	rg->rd = rg->rs + rg->rt;
	// side-note, we should be throwing an "IntegerOverflow"
	// but we can't because we can't detect this
	return;
}

void MipsInstructions::mdaddi(ARGS)
{ // page 65
	rg->rt = rg->rs + rg->get16(data);
	return;
}

void MipsInstructions::mdaddiu(ARGS)
{ // page 66
	rg->rt = rg->rs + rg->get16(data);
	return;
}

void MipsInstructions::mdaddu(ARGS)
{ // page 67
	rg->rt = rg->rs + rg->rt;
	return;
}

void MipsInstructions::mddiv(ARGS)
{ // page 68
	int64_t lo = (int64_t)rg->rs / (int64_t)rg->rt;
	int64_t hi = (int64_t)rg->rd % (int64_t)rg->rt;
	// TODO: figure out LO and HI
	return;
}

void MipsInstructions::mddivu(ARGS)
{ // page 69
	uint64_t lo = rg->rs / rg->rt;
	uint64_t hi = rg->rs % rg->rt;
	// TODO: figure out LO and HI
	return;
}

void MipsInstructions::mdiv(ARGS)
{ // page 70
	int64_t lo = (int32_t)rg->get32(rg->rs) / (int32_t)rg->get32(rg->rt);
	int64_t hi = (int32_t)rg->get32(rg->rs) % (int32_t)rg->get32(rg->rt);
	// TODO: figure out LO and HI
	return;
}

void MipsInstructions::mdivu(ARGS)
{ // page 72
	uint64_t lo = rg->get32(rg->rs) / rg->get32(rg->rt);
	uint64_t hi = rg->get32(rg->rs) % rg->get32(rg->rt);
	return;
}

void MipsInstructions::mdmult(ARGS)
{ // page 73
	// TODO: 128-bit multiplication?????
	int64_t lo = (int64_t)rg->rs * (int64_t)rg->rt;
	int64_t hi = (int64_t)rg->rs * (int64_t)rg->rt;
	return;
}

void MipsInstructions::mdmultu(ARGS)
{ // page 74
	// TODO: 128-bit multiplication?????
	uint64_t lo = rg->rs * rg->rt;
	uint64_t hi = rg->rs * rg->rt;
	return;
}

void MipsInstructions::mdsll(ARGS)
{ // page 75
	rg->rd = rg->rt << VALUE_SA(data);
	return;
}

void MipsInstructions::mdsll32(ARGS)
{ // page 76
	rg->rd = rg->rt << (VALUE_SA(data) + 32);
	return;
}

void MipsInstructions::mdsllv(ARGS)
{ // page 77
	rg->rd = rg->rt << rg->rs;
	return;
}

void MipsInstructions::mdsra(ARGS)
{ // page 78
	rg->rd = rg->rt >> VALUE_SA(data);
	return;
}

void MipsInstructions::mdsra32(ARGS)
{ // page 79
	rg->rd = rg->rt >> (VALUE_SA(data) + 32);
	return;
}

void MipsInstructions::mdsrav(ARGS)
{ // page 80
	rg->rd = rg->rt >> rg->rs;
	return;
}

void MipsInstructions::mdsrl(ARGS)
{ // page 81
	rg->rd = rg->rt >> VALUE_SA(data);
	return;
}

void MipsInstructions::mdsrl32(ARGS)
{ // page 82
	rg->rd = rg->rt >> (VALUE_SA(data) + 32);
	return;
}

void MipsInstructions::mdsrlv(ARGS)
{ // page 83
	rg->rd = rg->rt >> rg->rs;
	return;
}

void MipsInstructions::mdsub(ARGS)
{ // page 84
	rg->rd = (int64_t)rg->rs - (int64_t)rg->rt;
	return;
}

void MipsInstructions::mdsubu(ARGS)
{ // page 85
	rg->rd = rg->rs - rg->rt;
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

void MipsInstructions::mjalr(ARGS)
{ // page 88
	return;
}

void MipsInstructions::mjr(ARGS)
{ // page 89
	return;
}

void MipsInstructions::mlb(ARGS)
{ // page 90
	rg->rt = (*cpu->sm)[rg->rs + (int64_t)rg->get16(data)];
	// throws "TLBRefill", "TLBInvalid", "AddressError"
	return;
}

void MipsInstructions::mlbu(ARGS)
{ // page 91
	rg->rt = (*cpu->sm)[rg->rs + (int64_t)rg->get16(data)];
	// throws "TLBRefill", "TLBInvalid", "AddressError"
	return;
}

void MipsInstructions::mld(ARGS)
{ // page 92
	rg->rt = cpu->sm->read64(rg->rs + (int64_t)rg->get16(data));
	// throws "TLBRefill", "TLBInvalid", "AddressError", "BusError"
	return;
}

void MipsInstructions::mldc1(ARGS)
{ // page 93
	// TODO: implement coprocessors
	return;
}

void MipsInstructions::mldc2(ARGS)
{ // page 93
	return;
}

void MipsInstructions::mldl(ARGS)
{ // page 95
	uint64_t addr = rg->rs + (int64_t)rg->get16(data);
	uint64_t dt = cpu->sm->read64(addr);
	switch (0x7 & addr)
	{
		case 0: rg->rt = dt; return;
		case 1: rg->rt = (dt <<  8) + (0xff & rg->rt); return;
		case 2: rg->rt = (dt << 16) + (0xffff & rg->rt); return;
		case 3: rg->rt = (dt << 24) + (0xffffff & rg->rt); return;
		case 4: rg->rt = (dt << 32) + (0xffffffff & rg->rt); return;
		case 5: rg->rt = (dt << 40) + (0xffffffffff & rg->rt); return;
		case 6: rg->rt = (dt << 48) + (0xffffffffffff & rg->rt); return;
		case 7: rg->rt = (dt << 56) + (0xffffffffffffff & rg->rt); return;
	}
	// throws "TLBRefill", "TLBInvalid", "AddressError", "BusError"
}

void MipsInstructions::mldr(ARGS)
{ // page 98
	uint64_t addr = rg->rs + (int64_t)rg->get16(data);
	uint64_t dt = cpu->sm->read64(addr);
	switch (0x7 & addr)
	{
		case 0: rg->rt = (dt >> 56) + (0xffffffffffffff00 & rg->rt); return;
		case 1: rg->rt = (dt >> 48) + (0xffffffffffff0000 & rg->rt); return;
		case 2: rg->rt = (dt >> 40) + (0xffffffffff000000 & rg->rt); return;
		case 3: rg->rt = (dt >> 32) + (0xffffffff00000000 & rg->rt); return;
		case 4: rg->rt = (dt >> 24) + (0xffffff0000000000 & rg->rt); return;
		case 5: rg->rt = (dt >> 16) + (0xffff000000000000 & rg->rt); return;
		case 6: rg->rt = (dt >>  8) + (0xff00000000000000 & rg->rt); return;
		case 7: rg->rt = dt; return;
	}
	// throws "TLBRefill", "TLBInvalid", "AddressError", "BusError"
}

void MipsInstructions::mlh(ARGS)
{ // pge 101
	rg->rt = cpu->sm->read16(rg->rs + (int64_t)rg->get16(data));
	// throws "TLBRefill", "TLBInvalid", "AddressError", "BusError"
	return;
}

void MipsInstructions::mlhu(ARGS)
{ // page 102
	rg->rt = cpu->sm->read16(rg->rs + (int64_t)rg->get16(data));
	// throws "TLBRefill", "TLBInvalid", "AddressError"
	return;
}

void MipsInstructions::mll(ARGS)
{ // page 103
	rg->rt = cpu->sm->read32(rg->rs + (int64_t)rg->get16(data));
	// throws "TLBRefill", "TLBInvalid", "AddressError"
	return;
}

void MipsInstructions::mlld(ARGS)
{ // page 105
	rg->rt = cpu->sm->read64(rg->rs + (int64_t)rg->get16(data));
	// throws "TLBRefill", "TLBInvalid", "AddressError"
	return;
}

void MipsInstructions::mlui(ARGS)
{ // page 107
	rg->rt = rg->get16(data) << 16;
	return;
}

void MipsInstructions::mlw(ARGS)
{ // page 108
	uint64_t addr = rg->rs + (int64_t)rg->get16(data);
	rg->rt = cpu->sm->read32(0xfffffffffffffff8 & addr);
	// throws "TLBRefill", "TLBInvalid", "AddressError", "BusError"
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

void MipsInstructions::mlwl(ARGS)
{ // page 111
	uint64_t addr = rg->rs + (int64_t)rg->get16(data);
	uint64_t dt = cpu->sm->read32(addr);
	switch (0x3 & addr)
	{
		case 0: rg->rt = dt; return;
		case 1: rg->rt = (dt <<  8) + (0xff & rg->rt); return;
		case 2: rg->rt = (dt << 16) + (0xffff & rg->rt); return;
		case 3: rg->rt = (dt << 24) + (0xffffff & rg->rt); return;
	}
	// throws "TLBRefill", "TLBInvalid", "AddressError", "BusError"
}

void MipsInstructions::mlwr(ARGS)
{ // page 114
	uint64_t addr = rg->rs + (int64_t)rg->get16(data);
	uint64_t dt = cpu->sm->read32(addr);
	switch (0x3 & addr)
	{
		case 0: rg->rt = (dt << 24) + (0xffffff00 & rg->rt); return;
		case 1: rg->rt = (dt << 16) + (0xffff0000 & rg->rt); return;
		case 2: rg->rt = (dt <<  8) + (0xff000000 & rg->rt); return;
		case 3: rg->rt = dt; return;
	}
	// throws "TLBRefill", "TLBInvalid", "AddressError", "BusError"
}

void MipsInstructions::mlwu(ARGS)
{ // page 118
	uint64_t addr = rg->rs + (int64_t)rg->get16(data);
	rg->rt = cpu->sm->read32(0xfffffffffffffff8 & addr);
	// throws "TLBRefill", "TLBInvalid", "AddressError", "BusError"
	return;
}

void MipsInstructions::mmfhi(ARGS)
{ // page 119
	return;
}

void MipsInstructions::mmflo(ARGS)
{ // page 120
	return;
}

void MipsInstructions::mmovn(ARGS)
{ // page 121
	if (rg->rt != 0)
	{
		rg->rd = rg->rs;
	}
	return;
}

void MipsInstructions::mmovz(ARGS)
{ // page 122
	if (rg->rt == 0)
	{
		rg->rd = rg->rs;
	}
	return;
}

void MipsInstructions::mmthi(ARGS)
{ // page 123
	return;
}

void MipsInstructions::mmtlo(ARGS)
{ // page 124
	return;
}

void MipsInstructions::mmult(ARGS)
{ // page 125
	int64_t tmp = (int32_t)rg->get32(rg->rs) * (int32_t)rg->get32(rg->rt);
	int32_t lo = (int32_t)rg->get32(tmp);
	int32_t hi = (int32_t)rg->get32(tmp >> 32);
	return;
}

void MipsInstructions::mmultu(ARGS)
{ // page 126
	uint64_t tmp = rg->get32(rg->rs) * rg->get32(rg->rt);
	uint32_t lo = rg->get32(tmp);
	uint32_t hi = rg->get32(tmp >> 32);
	return;
}

void MipsInstructions::mnor(ARGS)
{ // page 127
	rg->rd = ~(rg->rs | rg->rt);
	return;
}

void MipsInstructions::mor(ARGS)
{ // page 128
	rg->rd = rg->rs | rg->rt;
	return;
}

void MipsInstructions::mori(ARGS)
{ // page 129
	rg->rt = rg->rs | rg->get16(data);
	return;
}

void MipsInstructions::mpref(ARGS)
{ // page 130
	return;
}

void MipsInstructions::msb(ARGS)
{ // page 133
	uint64_t addr = rg->rs + (int64_t)(rg->get16(data));
	(*cpu->sm)[addr] = rg->get8(rg->rt);
	// throws "TLBRefill", "TLBInvalid", "AddressError", "BusError", "TLBModified"
	return;
}

void MipsInstructions::msc(ARGS)
{ // page 134
	uint64_t addr = rg->rs + (int64_t)(0xfffc & rg->get16(data));
	cpu->sm->write(addr, rg->get32(rg->rt));
	// throws "TLBRefill", "TLBInvalid", "AddressError", "TLBModified"
	return;
}

void MipsInstructions::mscd(ARGS)
{ // page 137
	uint64_t addr = rg->rs + (int64_t)(0xfff8 & rg->get16(data));
	cpu->sm->write(addr, rg->rt);
	// throws "TLBRefill", "TLBInvalid", "AddressError", "TLBModified"
	return;
}

void MipsInstructions::msd(ARGS)
{ // page 140
	uint64_t addr = rg->rs + (int64_t)(0xfff8 & rg->get16(data));
	cpu->sm->write(addr, rg->rt);
	// throws "TLBRefill", "TLBInvalid", "AddressError", "TLBModified"
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

void MipsInstructions::msdl(ARGS)
{ // page 143
	uint64_t addr = rg->rs + (int64_t)rg->get16(data);
	uint64_t dt = cpu->sm->read64(addr);
	switch (0x7 & addr)
	{
		case 0: cpu->sm->write(addr, rg->rt); return;
		case 1: cpu->sm->write(addr, (rg->rt >>  8) + (0xff00000000000000 & dt)); return;
		case 2: cpu->sm->write(addr, (rg->rt >> 16) + (0xffff000000000000 & dt)); return;
		case 3: cpu->sm->write(addr, (rg->rt >> 24) + (0xffffff0000000000 & dt)); return;
		case 4: cpu->sm->write(addr, (rg->rt >> 32) + (0xffffffff00000000 & dt)); return;
		case 5: cpu->sm->write(addr, (rg->rt >> 40) + (0xffffffffff000000 & dt)); return;
		case 6: cpu->sm->write(addr, (rg->rt >> 48) + (0xffffffffffff0000 & dt)); return;
		case 7: cpu->sm->write(addr, (rg->rt >> 56) + (0xffffffffffffff00 & dt)); return;
	}
	// throws "TLBRefill", "TLBInvalid", "AddressError", "BusError", "TLBModified"
}

void MipsInstructions::msdr(ARGS)
{ // page 146
	uint64_t addr = rg->rs + (int64_t)rg->get16(data);
	uint64_t dt = cpu->sm->read64(addr);
	switch (0x7 & addr)
	{
		case 0: cpu->sm->write(addr, (rg->rt << 56) + (0x00ffffffffffffff & dt)); return;
		case 1: cpu->sm->write(addr, (rg->rt << 48) + (0x0000ffffffffffff & dt)); return;
		case 2: cpu->sm->write(addr, (rg->rt << 40) + (0x000000ffffffffff & dt)); return;
		case 3: cpu->sm->write(addr, (rg->rt << 32) + (0x00000000ffffffff & dt)); return;
		case 4: cpu->sm->write(addr, (rg->rt << 24) + (0x0000000000ffffff & dt)); return;
		case 5: cpu->sm->write(addr, (rg->rt << 16) + (0x000000000000ffff & dt)); return;
		case 6: cpu->sm->write(addr, (rg->rt <<  8) + (0x00000000000000ff & dt)); return;
		case 7: cpu->sm->write(addr, rg->rt); return;
	}
	// throws "TLBRefill", "TLBInvalid", "AddressError", "BusError", "TLBModified"
}

void MipsInstructions::msh(ARGS)
{ // page 149
	uint64_t addr = rg->rs + (int64_t)(0xfffe & rg->get16(data));
	cpu->sm->write(addr, rg->get16(rg->rt));
	// throws "TLBRefill", "TLBInvalid", "AddressError", "TLBModified"
	return;
}

void MipsInstructions::msll(ARGS)
{ // page 150
	rg->rd = rg->get32(rg->rt << VALUE_SA(data));
	return;
}

void MipsInstructions::msllv(ARGS)
{ // page 151
	rg->rd = rg->get32(rg->rt << rg->rs);
	return;
}

void MipsInstructions::mslt(ARGS)
{ // page 152
	rg->rd = ((int64_t)rg->rs < (int64_t)rg->rt)?1:0;
	return;
}

void MipsInstructions::mslti(ARGS)
{ // page 153
	rg->rd = ((int64_t)rg->rs < (int64_t)rg->get16(data))?1:0;
	return;
}

void MipsInstructions::msltiu(ARGS)
{ // page 154
	rg->rd = (rg->rs < rg->rt)?1:0;
	return;
}

void MipsInstructions::msltu(ARGS)
{ // page 155
	rg->rd = (rg->rs < rg->rt)?1:0;
	return;
}

void MipsInstructions::msra(ARGS)
{ // page 156
	rg->rt = rg->rt >> VALUE_SA(data);
	return;
}

void MipsInstructions::msrav(ARGS)
{ // page 157
	rg->rd = rg->rt >> rg->rs;
	return;
}

void MipsInstructions::msrl(ARGS)
{ // page 158
	rg->rd = rg->rt >> VALUE_SA(data);
	return;
}

void MipsInstructions::msrlv(ARGS)
{ // page 159
	rg->rd = rg->rt >> rg->rs;
	return;
}

void MipsInstructions::msub(ARGS)
{ // page 160
	rg->rd = rg->get32((int64_t)rg->rs - (int64_t)rg->rt);
	return;
}

void MipsInstructions::msubu(ARGS)
{ // page 161
	rg->rd = rg->get32(rg->rs - rg->rt);
	return;
}

void MipsInstructions::msw(ARGS)
{ // page 162
	uint64_t addr = rg->rs + (int64_t)(0xfffc & rg->get16(data));
	cpu->sm->write(addr, rg->get32(rg->rt));
	// throws "TLBRefill", "TLBInvalid", "AddressError", "TLBModified"
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

void MipsInstructions::mswl(ARGS)
{ // page 165
	uint64_t addr = rg->rs + (int64_t)rg->get16(data);
	uint64_t dt = cpu->sm->read32(addr);
	switch (0x3 & addr)
	{
		case 0: cpu->sm->write(addr, rg->get32(rg->rt)); return;
		case 1: cpu->sm->write(addr, rg->get32((rg->rt >>  8) + (0xff000000 & dt))); return;
		case 2: cpu->sm->write(addr, rg->get32((rg->rt >> 16) + (0xffff0000 & dt))); return;
		case 3: cpu->sm->write(addr, rg->get32((rg->rt >> 24) + (0xffffff00 & dt))); return;
	}
	// throws "TLBRefill", "TLBInvalid", "AddressError", "BusError", "TLBModified"
}

void MipsInstructions::mswr(ARGS)
{ // page 168
	uint64_t addr = rg->rs + (int64_t)rg->get16(data);
	uint64_t dt = cpu->sm->read32(addr);
	switch (0x3 & addr)
	{
		case 0: cpu->sm->write(addr, rg->get32((rg->rt << 24) + (0x00ffffff & dt))); return;
		case 1: cpu->sm->write(addr, rg->get32((rg->rt << 16) + (0x0000ffff & dt))); return;
		case 2: cpu->sm->write(addr, rg->get32((rg->rt <<  8) + (0x000000ff & dt))); return;
		case 3: cpu->sm->write(addr, rg->get32(rg->rt)); return;
	}
	// throws "TLBRefill", "TLBInvalid", "AddressError", "BusError", "TLBModified"
}

void MipsInstructions::msync(ARGS)
{ // page 171
	return;
}

void MipsInstructions::msyscall(ARGS)
{ // page 175
	// throws "SystemCall"
	return;
}

void MipsInstructions::mteq(ARGS)
{ // page 176
	// throws "Trap"
	return;
}

void MipsInstructions::mteqi(ARGS)
{ // page 177
	return;
}

void MipsInstructions::mtge(ARGS)
{ // page 178
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

void MipsInstructions::mtgeu(ARGS)
{ // page 181
	return;
}

void MipsInstructions::mtlt(ARGS)
{ // page 182
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

void MipsInstructions::mtltu(ARGS)
{ // page 185
	return;
}

void MipsInstructions::mtne(ARGS)
{ // page 186
	return;
}

void MipsInstructions::mtnei(ARGS)
{ // page 187
	return;
}

void MipsInstructions::mxor(ARGS)
{ // page 188
	rg->rd = rg->rs ^ rg->rt;
	return;
}

void MipsInstructions::mxori(ARGS)
{ // page 189
	rg->rd = rg->rs ^ rg->get16(data);
	return;
}

void MipsInstructions::mmovci(ARGS)
{ // page 277
	// throws "CoprocessorUnusable"
	return;
}

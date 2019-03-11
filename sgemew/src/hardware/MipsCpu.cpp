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

#include "MipsCpu.h"
#include "mips/MipsInstructions.h"
#include "../util/RegHelper.h"

using namespace sgemew::hardware;

MipsCpu::MipsCpu(SystemMemory *memory)
{
	sm = memory;
}

MipsCpu::~MipsCpu()
{
}

mipsfunc MipsCpu::getInstruction(uint32_t data)
{
	uint32_t inst = VALUE_CODE(data);

	switch (inst)
	{
		case SPECIAL:
			switch (VALUE_FUNC(data))
			{
				case SLL:		return &mips::MipsInstructions::msll;
				case MOVCI:		return &mips::MipsInstructions::mmovci;
				case SRL:		return &mips::MipsInstructions::msrl;
				case SRA:		return &mips::MipsInstructions::msra;
				case SLLV:		return &mips::MipsInstructions::msllv;
				case SRLV:		return &mips::MipsInstructions::msrlv;
				case SRAV:		return &mips::MipsInstructions::msrav;

				case JR:		return &mips::MipsInstructions::mjr;
				case JALR:		return &mips::MipsInstructions::mjalr;
				case MOVZ:		return &mips::MipsInstructions::mmovz;
				case MOVN:		return &mips::MipsInstructions::mmovn;
				case SYSCALL:	return &mips::MipsInstructions::msyscall;
				case BREAK:		return &mips::MipsInstructions::mbreak;
				case SYNC:		return &mips::MipsInstructions::msync;

				case MFHI:		return &mips::MipsInstructions::mmfhi;
				case MTHI:		return &mips::MipsInstructions::mmthi;
				case MFLO:		return &mips::MipsInstructions::mmflo;
				case MTLO:		return &mips::MipsInstructions::mmtlo;
				case DSLLV:		return &mips::MipsInstructions::mdsllv;
				case DSRLV:		return &mips::MipsInstructions::mdsrlv;
				case DSRAV:		return &mips::MipsInstructions::mdsrav;

				case MULT:		return &mips::MipsInstructions::mmult;
				case MULTU:		return &mips::MipsInstructions::mmultu;
				case DIV:		return &mips::MipsInstructions::mdiv;
				case DIVU:		return &mips::MipsInstructions::mdivu;
				case DMULT:		return &mips::MipsInstructions::mdmult;
				case DMULTU:	return &mips::MipsInstructions::mdmultu;
				case DDIV:		return &mips::MipsInstructions::mddiv;
				case DDIVU:		return &mips::MipsInstructions::mddivu;

				case ADD:		return &mips::MipsInstructions::madd;
				case ADDU:		return &mips::MipsInstructions::maddu;
				case SUB:		return &mips::MipsInstructions::msub;
				case SUBU:		return &mips::MipsInstructions::msubu;
				case AND:		return &mips::MipsInstructions::mand;
				case OR:		return &mips::MipsInstructions::mor;
				case XOR:		return &mips::MipsInstructions::mxor;
				case NOR:		return &mips::MipsInstructions::mnor;

				case SLT:		return &mips::MipsInstructions::mslt;
				case SLTU:		return &mips::MipsInstructions::msltu;
				case DADD:		return &mips::MipsInstructions::mdadd;
				case DADDU:		return &mips::MipsInstructions::mdaddu;
				case DSUB:		return &mips::MipsInstructions::mdsub;
				case DSUBU:		return &mips::MipsInstructions::mdsubu;

				case TGE:		return &mips::MipsInstructions::mtge;
				case TGEU:		return &mips::MipsInstructions::mtgeu;
				case TLT:		return &mips::MipsInstructions::mtlt;
				case TLTU:		return &mips::MipsInstructions::mtltu;
				case TEQ:		return &mips::MipsInstructions::mteq;
				case TNE:		return &mips::MipsInstructions::mtne;

				case DSLL:		return &mips::MipsInstructions::mdsll;
				case DSRL:		return &mips::MipsInstructions::mdsrl;
				case DSRA:		return &mips::MipsInstructions::mdsra;
				case DSLL32:	return &mips::MipsInstructions::mdsll32;
				case DSRL32:	return &mips::MipsInstructions::mdsrl32;
				case DSRA32:	return &mips::MipsInstructions::mdsra32;

				default:		return &mips::MipsInstructions::nop;
			}
		case REGIMM:
			switch (VALUE_RT(data))
			{
				case BLTZ:		return &mips::MipsInstructions::mbltz;
				case BGEZ:		return &mips::MipsInstructions::mbgez;
				case BLTZL:		return &mips::MipsInstructions::mbltzl;
				case BGEZL:		return &mips::MipsInstructions::mbgezl;

				case TGEI:		return &mips::MipsInstructions::mtgei;
				case TGEIU:		return &mips::MipsInstructions::mtgeiu;
				case TLTI:		return &mips::MipsInstructions::mtlti;
				case TLTIU:		return &mips::MipsInstructions::mtltiu;
				case TEQI:		return &mips::MipsInstructions::mteqi;
				case TNEI:		return &mips::MipsInstructions::mtnei;

				case BLTZAL:	return &mips::MipsInstructions::mbltzal;
				case BGEZAL:	return &mips::MipsInstructions::mbgezal;
				case BLTZALL:	return &mips::MipsInstructions::mbltzall;
				case BGEZALL:	return &mips::MipsInstructions::mbgezall;

				default:		return &mips::MipsInstructions::nop;
			}
		case J:			return &mips::MipsInstructions::mj;
		case JAL:		return &mips::MipsInstructions::mjal;
		case BEQ:		return &mips::MipsInstructions::mbeq;
		case BNE:		return &mips::MipsInstructions::mbne;
		case BLEZ:		return &mips::MipsInstructions::mblez;
		case BGTZ:		return &mips::MipsInstructions::mbgtz;

		case ADDI:		return &mips::MipsInstructions::maddi;
		case ADDIU:		return &mips::MipsInstructions::maddiu;
		case SLTI:		return &mips::MipsInstructions::mslti;
		case SLTIU:		return &mips::MipsInstructions::msltiu;
		case ANDI:		return &mips::MipsInstructions::mandi;
		case ORI:		return &mips::MipsInstructions::mori;
		case XORI:		return &mips::MipsInstructions::mxori;
		case LUI:		return &mips::MipsInstructions::mlui;

		case COP0:		return &mips::MipsInstructions::mcop0;
		case COP1:		return &mips::MipsInstructions::mcop1;
		case COP2:		return &mips::MipsInstructions::mcop2;
		case COP1X:		return &mips::MipsInstructions::mcop1x;
		case BEQL:		return &mips::MipsInstructions::mbeql;
		case BNEL:		return &mips::MipsInstructions::mbnel;
		case BLEZL:		return &mips::MipsInstructions::mblezl;
		case BGTZL:		return &mips::MipsInstructions::mbgtzl;

		case DADDI:		return &mips::MipsInstructions::mdaddi;
		case DADDIU:	return &mips::MipsInstructions::mdaddiu;
		case LDL:		return &mips::MipsInstructions::mldl;
		case LDR:		return &mips::MipsInstructions::mldr;

		case LB:		return &mips::MipsInstructions::mlb;
		case LH:		return &mips::MipsInstructions::mlh;
		case LWL:		return &mips::MipsInstructions::mlwl;
		case LW:		return &mips::MipsInstructions::mlw;
		case LBU:		return &mips::MipsInstructions::mlbu;
		case LHU:		return &mips::MipsInstructions::mlhu;
		case LWR:		return &mips::MipsInstructions::mlwr;
		case LWU:		return &mips::MipsInstructions::mlwu;

		case SB:		return &mips::MipsInstructions::msb;
		case SH:		return &mips::MipsInstructions::msh;
		case SWL:		return &mips::MipsInstructions::mswl;
		case SW:		return &mips::MipsInstructions::msw;
		case SDL:		return &mips::MipsInstructions::msdl;
		case SDR:		return &mips::MipsInstructions::msdr;
		case SWR:		return &mips::MipsInstructions::mswr;

		case LL:		return &mips::MipsInstructions::mll;
		case LWC1:		return &mips::MipsInstructions::mlwc1;
		case LWC2:		return &mips::MipsInstructions::mlwc2;
		case PREF:		return &mips::MipsInstructions::mpref;
		case LLD:		return &mips::MipsInstructions::mlld;
		case LDC1:		return &mips::MipsInstructions::mldc1;
		case LDC2:		return &mips::MipsInstructions::mldc2;
		case LD:		return &mips::MipsInstructions::mld;

		case SC:		return &mips::MipsInstructions::msc;
		case SWC1:		return &mips::MipsInstructions::mswc1;
		case SWC2:		return &mips::MipsInstructions::mswc2;
		case SCD:		return &mips::MipsInstructions::mscd;
		case SDC1:		return &mips::MipsInstructions::msdc1;
		case SDC2:		return &mips::MipsInstructions::msdc2;
		case SD:		return &mips::MipsInstructions::msd;

		default:		return &mips::MipsInstructions::nop;
	}
}

void MipsCpu::cycle()
{
	// TODO: stuff goes here
	uint32_t data = 0;

	// TODO: maybe moar stuff here
	mipsfunc f = getInstruction(data);

	uint64_t *rs = &reg_gp[VALUE_RS(data)];
	uint64_t *rt = &reg_gp[VALUE_RT(data)];
	uint64_t *rd = &reg_gp[VALUE_RD(data)];

	sgemew::util::RegHelper *rg = new sgemew::util::RegHelper(*rs, *rt, *rd);
	f(data, rg, this);

	// restore registers
	*rs = rg->rs;
	*rt = rg->rt;
	*rd = rg->rd;
}

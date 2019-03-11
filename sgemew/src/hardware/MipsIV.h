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

#ifndef MIPSISA_H
#define MIPSISA_H

#include "../util/RegHelper.h"

#define SIZE8 0xff
#define SIZE16 0xffff
#define SIZE32 0xffffffff
#define SIZE64 0xffffffffffffffff

#define ARGS uint32_t data, sgemew::util::RegHelper *rg, MipsCpu* cpu
#define CODE_MASK 0xfc000000
#define FUNC_MASK 0x0000003f
#define REG_MASK  0x1f

#define VALUE_CODE(in) ((in & CODE_MASK) >> 26)
#define VALUE_FUNC(in) (in & FUNC_MASK)

#define CHECK_CODE_MASK(in, op) (VALUE_CODE(in) == op)
#define CHECK_FUNC_MASK(in, op) (VALUE_FUNC(in) == op)

#define SHIFT_REGISTER(shft, val) ((val >> shft) & REG_MASK)

#define VALUE_RS(val) (SHIFT_REGISTER(21, val))
#define VALUE_RT(val) (SHIFT_REGISTER(16, val))
#define VALUE_RD(val) (SHIFT_REGISTER(11, val))
#define VALUE_SA(val) (SHIFT_REGISTER(6, val))

#define CHECK_RS(in, op) (VALUE_RS(in) == op)

/*
#define CODE		0b000'000
#define CODE		0b000'001
#define CODE		0b000'010
#define CODE		0b000'011
#define CODE		0b000'100
#define CODE		0b000'101
#define CODE		0b000'110
#define CODE		0b000'111
*/
//{ Base Opcodes
#define SPECIAL		0b000'000
#define REGIMM		0b000'001
#define J			0b000'010
#define JAL			0b000'011
#define BEQ			0b000'100
#define BNE			0b000'101
#define BLEZ		0b000'110
#define BGTZ		0b000'111

#define ADDI		0b001'000
#define ADDIU		0b001'001
#define SLTI		0b001'010
#define SLTIU		0b001'011
#define ANDI		0b001'100
#define ORI			0b001'101
#define XORI		0b001'110
#define LUI			0b001'111

#define COP0		0b010'000
#define COP1		0b010'001
#define COP2		0b010'010
#define COP1X		0b010'011
#define BEQL		0b010'100
#define BNEL		0b010'101
#define BLEZL		0b010'110
#define BGTZL		0b010'111

#define DADDI		0b011'000
#define DADDIU		0b011'001
#define LDL			0b011'010
#define LDR			0b011'011

#define LB			0b100'000
#define LH			0b100'001
#define LWL			0b100'010
#define LW			0b100'011
#define LBU			0b100'100
#define LHU			0b100'101
#define LWR			0b100'110
#define LWU			0b100'111

#define SB			0b101'000
#define SH			0b101'001
#define SWL			0b101'010
#define SW			0b101'011
#define SDL			0b101'100
#define SDR			0b101'101
#define SWR			0b101'110

#define LL			0b110'000
#define LWC1		0b110'001
#define LWC2		0b110'010
#define PREF		0b110'011
#define LLD			0b110'100
#define LDC1		0b110'101
#define LDC2		0b110'110
#define LD			0b110'111

#define SC			0b111'000
#define SWC1		0b111'001
#define SWC2		0b111'010
#define SCD			0b111'100
#define SDC1		0b111'101
#define SDC2		0b111'110
#define SD			0b111'111
//}


//{ SPECIAL functions
#define SLL			0b000'000
#define MOVCI		0b000'001
#define SRL			0b000'010
#define SRA			0b000'011
#define SLLV		0b000'100
#define SRLV		0b000'110
#define SRAV		0b000'111

#define JR			0b001'000
#define JALR		0b001'001
#define MOVZ		0b001'010
#define MOVN		0b001'011
#define SYSCALL		0b001'100
#define BREAK		0b001'101
#define SYNC		0b001'111

#define MFHI		0b010'000
#define MTHI		0b010'001
#define MFLO		0b010'010
#define MTLO		0b010'011
#define DSLLV		0b010'100
#define DSRLV		0b010'110
#define DSRAV		0b010'111

#define MULT		0b011'000
#define MULTU		0b011'001
#define DIV			0b011'010
#define DIVU		0b011'011
#define DMULT		0b011'100
#define DMULTU		0b011'101
#define DDIV		0b011'110
#define DDIVU		0b011'111

#define ADD			0b100'000
#define ADDU		0b100'001
#define SUB			0b100'010
#define SUBU		0b100'011
#define AND			0b100'100
#define OR			0b100'101
#define XOR			0b100'110
#define NOR			0b100'111

#define SLT			0b101'010
#define SLTU		0b101'011
#define DADD		0b101'100
#define DADDU		0b101'101
#define DSUB		0b101'110
#define DSUBU		0b101'111

#define TGE			0b110'000
#define TGEU		0b110'001
#define TLT			0b110'010
#define TLTU		0b110'011
#define TEQ			0b110'100
#define TNE			0b110'110

#define DSLL		0b111'000
#define DSRL		0b111'010
#define DSRA		0b111'011
#define DSLL32		0b111'100
#define DSRL32		0b111'110
#define DSRA32		0b111'111

//}

//{ REGIMM functions
#define BLTZ		0b00'000
#define BGEZ		0b00'001
#define BLTZL		0b00'010
#define BGEZL		0b00'011

#define TGEI		0b01'000
#define TGEIU		0b01'001
#define TLTI		0b01'010
#define TLTIU		0b01'011
#define TEQI		0b01'100
#define TNEI		0b01'110

#define BLTZAL		0b10'000
#define BGEZAL		0b10'001
#define BLTZALL		0b10'010
#define BGEZALL		0b10'011

//}

#endif

#include "MemoryRanger.h"

namespace sgemew
{

namespace util
{

MemoryRanger::MemoryRanger(uint32_t base, uint32_t length, sgemew::hardware::MemoryDevice *memdev)
{
	b = base;
	l = length;
	md = memdev;
}

uint32_t MemoryRanger::getBase()
{
	return b;
}

uint32_t MemoryRanger::getLength()
{
	return l;
}

uint32_t MemoryRanger::getEnd()
{
	return b + l;
}

bool MemoryRanger::isAddrInRange(uint32_t addr)
{
	if (addr < getBase()) { return false; }
	if (addr > getEnd()) { return false; }
	return true;
}

sgemew::hardware::MemoryDevice *MemoryRanger::getMemory()
{
	return md;
}

MemoryRanger::~MemoryRanger()
{
}

}
}

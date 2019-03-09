#ifndef MEMORYRANGER_H
#define MEMORYRANGER_H

#include "../hardware/MemoryDevice.h"
#include <cstdint>

namespace sgemew
{

namespace util
{

class MemoryRanger
{
public:
	MemoryRanger(uint32_t base, uint32_t length, sgemew::hardware::MemoryDevice *memdev);
	~MemoryRanger();

	uint32_t getBase();
	uint32_t getLength();
	uint32_t getEnd();

	bool isAddrInRange(uint32_t addr);
	sgemew::hardware::MemoryDevice *getMemory();

private:
	uint32_t b;
	uint32_t l;
	sgemew::hardware::MemoryDevice *md;
};

}

}

#endif // MEMORYRANGER_H

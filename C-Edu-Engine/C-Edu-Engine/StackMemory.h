#pragma once

#include"Memory.h"

class StackMemory : Memory
{
public:
	// return address
	virtual uint8_t alloc(uint8_t size);
	// read data
	virtual uint8_t read(uint8_t addr);
	// write data
	virtual void write(uint8_t addr, uint8_t data);

public:


private:
	std::array<uint8_t, 64> memory;
	uint8_t stack_pointer;

};


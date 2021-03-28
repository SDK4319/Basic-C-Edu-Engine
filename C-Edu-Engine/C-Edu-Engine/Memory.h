#pragma once

#include<iostream>
#include<cstdint>
#include<array>

class Memory
{
public:
	// return address
	virtual uint8_t alloc(uint8_t size) = 0;
	// read data
	virtual uint8_t read(uint8_t addr) = 0;
	// write data
	virtual void write(uint8_t addr, uint8_t data) = 0;
};


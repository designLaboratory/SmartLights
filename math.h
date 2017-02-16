#ifndef MATH_h
#define MATH_h
#include "MKL25Z4.h"


void Sector1(uint8_t value,uint8_t (*wsk)[3]);
void Sector2(uint8_t value,uint8_t (*wsk)[3]);
void Sector3(uint8_t value,uint8_t (*wsk)[3]);	
void Sector4(uint8_t value,uint8_t (*wsk)[3]);
void Antyaliasing(uint8_t (*wsk)[3]);

#endif

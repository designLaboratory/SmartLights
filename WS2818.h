#ifndef WS2818_h
#define WS2818_h
#include "MKL25Z4.h"


static uint8_t liczba_diod=40;
static uint8_t color;
static uint8_t kolory[40][3];
void LedInit(void);
void SendReset(void);
void SendOne(void);
void SendZero(void);
void Display(uint8_t digit,uint8_t color[40][3]);
void Hello(void);
#endif

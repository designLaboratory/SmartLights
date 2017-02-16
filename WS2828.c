#include "ws2818.h"
#define mask 0x80
#define LedOut 0

const uint32_t MaskLed[]={1UL<<3};

void LedInit(void){
	SIM->SCGC5|=SIM_SCGC5_PORTD_MASK;
	PORTD->PCR[3]=PORT_PCR_MUX(1UL);    //data out is PTE0
	FPTD->PDDR|=MaskLed[LedOut];
	FPTD->PCOR|=0x8;
}
void SendReset(void){
	uint16_t nr_of_cycles;		
	FPTD->PCOR|=(1UL<<3);
	for(nr_of_cycles=200; nr_of_cycles>0; nr_of_cycles--){__nop();}
	FPTD->PSOR|=(1UL<<3);
}
void SendOne(void){
		FPTD->PSOR|=0x8;  //FPTD->PSOR|=0x8;
		__nop();
		__nop();
		__nop();
		__nop();
		__nop();
		__nop();
		FPTD->PCOR|=0x8;		//FPTD->PCOR|=0x8;	
}
void SendZero(void){
		FPTD->PSOR|=0x8;
		FPTD->PCOR|=0x8;
			__nop();
			__nop();
			__nop();
			__nop();
			__nop();
			__nop();
}	

void Display(uint8_t digit,uint8_t color[40][3]){   //function which display colors on 40 leds, color[x][0] - RED
	uint8_t nr_vec;                                   //                                          color[x][1] - GREEN
	uint8_t nr_byte;                                  //                                          color[x][2] - BLUE
	uint8_t nr_digits;
	for(nr_digits=0;nr_digits<=digit;nr_digits++){
		for(nr_vec=0;nr_vec<3;nr_vec++){
				for(nr_byte = 8; nr_byte>0; nr_byte--){
				if(mask & color[nr_digits][nr_vec]) SendOne();
				else SendZero();
			color[nr_digits][nr_vec]<<=1;
			}
		}
	}
		
}

void Hello(void){
	uint8_t i;
	uint16_t j;
	uint8_t k;
	uint8_t liczba_diod;
	uint8_t color;
	uint8_t kolory[40][3];	
			for(color=0;color<3;color++){
				for(i=0;i<255;i++){
					for(liczba_diod=0;liczba_diod<40;liczba_diod++){
						kolory[liczba_diod][color]=i;
					}
					Display(liczba_diod,kolory);		//function which display table of colors
					for(j=0;j<3000;j++){}
				}
				for(i=255;i>0;i--){
					for(liczba_diod=0;liczba_diod<40;liczba_diod++){
						kolory[liczba_diod][color]=i;
					}
					Display(liczba_diod,kolory);
					for(j=0;j<3000;j++){}
				}
			}
}

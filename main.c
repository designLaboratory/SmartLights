///////////////////////////////////////////////////////////////////
//SmartLights - 


#include "MKL25Z4.h"
#include "WS2818.h"
#include "math.h"

uint8_t colors[40][3];
uint8_t (*wsk)[3]=colors;

int main(void){

	uint32_t i;
	LedInit();		//initialization of matrix led
	Hello();

	while(1){
		Sector1(127,colors);
		Sector2(0,colors);
		Sector3(10,colors);
		Sector4(60,colors);
		Antyaliasing(colors);
		for(i=0;i<300000;i++){}
		Display(40,colors);
		}


	return 1;
}




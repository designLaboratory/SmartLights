#include "MKL25Z4.h"
#include "WS2818.h"
#include "math.h"


int main(void){

	
//////////////////////////////////////////////////////////////////////////
//	its a simple example how to use functions,
//////////////////////////////////////////////////////////////////////////
	uint32_t i;
	LedInit();		//initialization of matrix led
	Hello();

	while(1){
		Sector1(0);
		for(i=0;i<30;i++){}
		Sector2(127);
		for(i=0;i<30;i++){}
		Sector3(0);
		for(i=0;i<30;i++){}
		Sector4(0);
		for(i=0;i<30;i++){}
	}


	return 1;
}




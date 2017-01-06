#include "MKL25Z4.h"
#include "WS2818.h"


int main(void){

	
//////////////////////////////////////////////////////////////////////////
//	its a simple example how to use functions,
//////////////////////////////////////////////////////////////////////////
	uint8_t i;
	uint16_t j;
	uint8_t liczba_diod;
	uint8_t color;
	uint8_t kolory[40][3];		
	LedInit();		//initialization of matrix led
	while(1){
			for(color=0;color<3;color++){
				for(i=0;i<255;i++){
					for(liczba_diod=0;liczba_diod<40;liczba_diod++){
						kolory[liczba_diod][color]=i;
					}
					Display(liczba_diod,kolory);		//function which display table of colors
					for(j=0;j<30000;j++){}
				}
				for(i=255;i>0;i--){
					for(liczba_diod=0;liczba_diod<40;liczba_diod++){
						kolory[liczba_diod][color]=i;
					}
					Display(liczba_diod,kolory);
					for(j=0;j<30000;j++){}
				}
			}
		}
return 1;


	return 1;
}

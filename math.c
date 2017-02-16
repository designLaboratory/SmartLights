#include "math.h"
#include "ws2818.h"


void Sector1(uint8_t value){
	uint8_t Sector[]={0,8,9,16,17,18,24,25,32};
	uint8_t colors[40][3];
	uint8_t i;
	for(i=0;i<9;i++){
		colors[Sector[i]][0]=value;
		colors[Sector[i]][1]=value;
		colors[Sector[i]][2]=value;
	}
	Display(40,colors);
	SendReset();
}

void Sector2(uint8_t value){
	uint8_t Sector[]={1,2,3,4,5,6,10,11,12,13,19};
	uint8_t colors[40][3];
	uint8_t i;
		for(i=0;i<11;i++){
		colors[Sector[i]][0]=value;
		colors[Sector[i]][1]=value;
		colors[Sector[i]][2]=value;
	}
	Display(40,colors);
	SendReset();
}

void Sector3(uint8_t value){
	uint8_t Sector[]={7,14,15,21,22,23,30,31,39};
	uint8_t colors[40][3];
	uint8_t i;
		for(i=0;i<9;i++){
		colors[Sector[i]][0]=value;
		colors[Sector[i]][1]=value;
		colors[Sector[i]][2]=value;
	}
	Display(40,colors);
	SendReset();
}

void Sector4(uint8_t value){
	uint8_t Sector[]={20,26,27,28,29,33,34,35,36,37,38};
	uint8_t colors[40][3];
	uint8_t i;
		for(i=0;i<11;i++){
		colors[Sector[i]][0]=value;
		colors[Sector[i]][1]=value;
		colors[Sector[i]][2]=value;
	}
	Display(40,colors);
	SendReset();
}

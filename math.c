#include "math.h"
#include "ws2818.h"



void Sector1(uint8_t value,uint8_t (*wsk)[3]){
	uint8_t Sector[]={0,8,9,16,17,18,24,25,32};
	uint8_t colors[40][3];
	uint8_t i;
	for(i=0;i<9;i++){
		colors[Sector[i]][0]=value;
		colors[Sector[i]][1]=value;
		colors[Sector[i]][2]=value;
	}
	for(i=0;i<40;i++){
		**wsk=colors[i][0];
		*((*wsk)+1)=colors[i][1];
		*((*wsk)+2)=colors[i][2];
		wsk++;
	}
}

void Sector2(uint8_t value,uint8_t (*wsk)[3]){
	uint8_t Sector[]={1,2,3,4,5,6,10,11,12,13,19};
	uint8_t colors[40][3];
	uint8_t i;
		for(i=0;i<11;i++){
		colors[Sector[i]][0]=value;
		colors[Sector[i]][1]=value;
		colors[Sector[i]][2]=value;
	}
	for(i=0;i<40;i++){
		**wsk=colors[i][0];
		*((*wsk)+1)=colors[i][1];
		*((*wsk)+2)=colors[i][2];
		wsk++;
	}
}

void Sector3(uint8_t value,uint8_t (*wsk)[3]){
	uint8_t Sector[]={7,14,15,21,22,23,30,31,39};
	uint8_t colors[40][3];
	uint8_t i;
		for(i=0;i<9;i++){
		colors[Sector[i]][0]=value;
		colors[Sector[i]][1]=value;
		colors[Sector[i]][2]=value;
	}
	for(i=0;i<40;i++){
		**wsk=colors[i][0];
		*((*wsk)+1)=colors[i][1];
		*((*wsk)+2)=colors[i][2];
		wsk++;
	}
}

void Sector4(uint8_t value,uint8_t (*wsk)[3]){
	uint8_t Sector[]={20,26,27,28,29,33,34,35,36,37,38};
	uint8_t colors[40][3];
	uint8_t i;
		for(i=0;i<11;i++){
		colors[Sector[i]][0]=value;
		colors[Sector[i]][1]=value;
		colors[Sector[i]][2]=value;
	}
	for(i=0;i<40;i++){
		**wsk=colors[i][0];
		*((*wsk)+1)=colors[i][1];
		*((*wsk)+2)=colors[i][2];
		wsk++;
	}
}

void Antyaliasing(uint8_t colors[40][3]){
	uint8_t Edge12[]={0,1,9,10,18,19};
	uint8_t Edge23[]={6,7,13,14};
	uint8_t Edge34[]={20,21,29,30,38,39};
	uint8_t Edge41[]={32,33,25,26};
	uint8_t i;
	uint8_t ValueA=0;
	uint8_t ValueB=0;
	uint8_t ValueC=0;
	uint8_t ValueD=0;
	uint8_t MinusA;
	uint8_t MinusB;
	uint8_t MinusC;
	uint8_t MinusD;
	ValueA=colors[0][0];
	ValueB=colors[1][0];
	ValueC=colors[22][0];
	ValueD=colors[35][0];
	
	if(ValueA>ValueB){MinusA=ValueA-ValueB;}
	else {MinusA=ValueB-ValueA;}
	
	if(ValueB>ValueC){MinusB=ValueB-ValueC;}
	else {MinusB=ValueC-ValueB;}
	
	if(ValueC>ValueD){MinusC=ValueC-ValueD;}
	else {MinusC=ValueD-ValueC;}
	
	if(ValueD>ValueA){MinusD=ValueD-ValueA;}
	else {MinusD=ValueA-ValueD;}
	
	for(i=0;i<6;i++){
		colors[Edge12[i]][0]=MinusA/2;
		colors[Edge12[i]][1]=MinusA/2;
		colors[Edge12[i]][2]=MinusA/2;
		
		colors[Edge34[i]][0]=MinusC/2;
		colors[Edge34[i]][1]=MinusC/2;
		colors[Edge34[i]][2]=MinusC/2;
	}
	for(i=0;i<4;i++){
		colors[Edge23[i]][0]=MinusB/2;
		colors[Edge23[i]][1]=MinusB/2;
		colors[Edge23[i]][2]=MinusB/2;
		
		colors[Edge41[i]][0]=MinusD/2;
		colors[Edge41[i]][1]=MinusD/2;
		colors[Edge41[i]][2]=MinusD/2;
	}
}
























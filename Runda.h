#ifndef RUNDA
#define RUNDA

#include<iostream>
#include "Mapa.h"
#include "Player.h"
using namespace std;
class runda {		//definire clasei runda
	int *jucatori;		//vectori pentru tipurile de jucatori
	int nr_jucatori;	//numarul de jucatori din runda
public:
	runda();		//constructorul clasei runda
	void play();	//functia pentru rularea rundelor
};
#endif
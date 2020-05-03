#ifndef HARTA
#define HARTA
#include <ctime>
#include <iostream>
#include "Player.h"
using namespace std;

class harta {	//definirea clasei harta
	int** map;	//harta in forma de matrice de pointeri
	int *comoara;	//vectorul comorilor
public:
	harta();
	int miscare(int i, int j);
	bool adaugare_p( int colt, int i);
	void afisare();
	bool castig();
	int cautare_l(int i);
	int cautare_c(int j);
	void gasit(int c);
};

#endif
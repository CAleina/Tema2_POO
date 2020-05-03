#ifndef PLAYER
#define PLAYER
#include "Mapa.h"

class player { //definirea clasei de baza player
	int i, j;
public:
	player() { i = 0; j = 0; }
	virtual int move(harta& M)=0;
	void linie(harta& M, int i);
	void coloana(harta& M, int i);
};

class player1:public player { //definiarea clasei mostenite player1
	int i, j;
public:
	int move(harta& M);
};

class player2:public player {	//definiarea clasei mostenite player1
	int i, j;
public:
	int move(harta& M);
};

class player3:public player {	//definiarea clasei mostenite player1
	int i, j;
public:
	int move(harta& M);
};

class player4: public player{	//definiarea clasei mostenite player1
	int i, j;
public:
	int move(harta& M);
};

#endif

#include <ctime>
#include <iostream>
#include "Mapa.h"
#include "Player.h"

void harta::gasit(int c) {	//functia pentru inseamnarea comorilor gasite
	for (int i = 0; i < 3; i++)
		if (comoara[i] == 0)
			comoara[i] = c;
}
int harta::cautare_l(int i) {	//cautarea unei linii pe harta dupa variabila data ca parametru
	if (map[1][1] == i || map[1][20] == i)
		return 1;
	else
		return 20;
}

int harta::cautare_c(int j) //cautarea unei coloane pe harta dupa variabila data ca parametru
{
	if (map[1][1] == j || map[20][1] == j)
		return 1;
	else
		return 20;
}

harta::harta() {	//constructorul fara parametrii al clasei harta
	map = new int* [22];
	for (int i = 0; i < 22; ++i)
	{
		map[i] = new int[22];
		for (int j = 0; j < 22; ++j)
			if (i == 0 || i == 21 || j == 0 || j == 21)
				map[i][j] = -2;
			else
				map[i][j] = 0;
	} //construirea matricii harta
	srand((int)time(0));
	int ok = 0;
	while (ok < 3) {	//asezarea de comorii pe harta random
		int r = (rand() % 20) + 1;
		int ra = (rand() % 20) + 1;
		if (map[r][ra] == 0 && r != 1 && r != 20 && ra != 1 && ra != 20)
		{
			map[r][ra] = 2;
			ok++;
		}
	}
	comoara = new int[3];	//initializarea vectorului de comori
	for (int i = 0; i < 3; i++)
		comoara[i] = 0;
}

int harta::miscare(int i, int j) { //insemnarea miscarii unui player pe harta
	if (map[i][j] == 0)	// jucatorul se poate misca in acest loc
	{
		map[i][j] = 1;
		return 1;
	}
	else if (map[i][j] == 2)	//jucatorul a gasit o comoara
	{
		map[i][j] = 1;
		for (i = 1; i <= 3; i++)
			if (comoara[i] == 0)
				comoara[i] = 1;
		return 2;
	}
	else
		return 0;	// jucatorul nu se poate misca in acest loc
}

bool harta::adaugare_p(int colt, int i) { //adaugarea unui player intr-un colt al hartii
	if (colt == 1) //asezarea in coltul stanga-sus
	{
		if (map[1][1] == 0)
		{
			map[1][1] = i;
			return true;
		}
		else
			return false;
	}
	else if (colt == 2)	//asezarea in coltul dreapta-sus
	{
		if (map[1][20] == 0)
		{
			map[1][20] = i;
			return true;
		}
		else
			return false;
	}
	else if (colt == 3)	//asezarea in coltul stanga-jos
	{
		if (map[20][1] == 0)
		{
			map[20][1] = i;
			return true;
		}
		else
			return false;
	}
	else if (colt == 4)	//asezarea in coltul dreapta-jos
	{
		if (map[20][20] == 0)
		{
			map[20][20] = i;
			return true;
		}
		else
			return false;
	}
}

void harta::afisare() {//afisarea matricei
	for (int i = 1; i < 21; i++)
	{
		for (int j = 1; j < 21; j++)
			cout << map[i][j] << " ";
		cout << endl;
	}
}

bool harta::castig() {	//se verifica daca au fost gasite toate comorile
	if (comoara[2] == 0)
		return false;
	else
		return true;
}
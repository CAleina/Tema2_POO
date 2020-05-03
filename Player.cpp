#include "Mapa.h"
#include "Player.h"

void player::linie(harta& M, int i) {	//initializarea liniei in functie de pozitia pe harta
	this->i = M.cautare_l(i);
}

void player::coloana(harta& M, int j) {	//initializarea coloanei in functie de pozitia pe harta
	this->j = M.cautare_c(j);
}

//inregistrarea miscarii unui jucator in functie de tipul de jucator
int player1::move(harta& M) {
	if (M.miscare(i - 1, j) == 1)
	{
		i = i - 1;
		return 1;
	}
	else if (M.miscare(i - 1, j) == 2)
		return 2;
	else if (M.miscare(i + 1, j) == 1)
	{
		i = i + 1;
		return 1;
	}
	else if (M.miscare(i + 1, j) == 2)
		return 2;
	else if (M.miscare(i, j - 1) == 1)
	{
		j = j - 1;
		return 1;
	}
	else if (M.miscare(i, j - 1) == 2)
		return 2;
	else if (M.miscare(i, j + 1) == 1)
	{
		j = j + 1;
		return 1;
	}
	else if (M.miscare(i, j + 1) == 2)
		return 2;
	else if (M.miscare(i - 1, j) == 0)
		return 0;
	else if (M.miscare(i + 1, j) == 0)
		return 0;
	else if (M.miscare(i, j - 1) == 0)
		return 0;
	else if (M.miscare(i, j + 1) == 0)
		return 0;
}

int player2::move(harta& M) {
	if (M.miscare(i - 1, j - 1) == 1)
	{
		i = i - 1;
		j = j - 1;
		return 1;
	}
	else if (M.miscare(i - 1, j - 1) == 2)
		return 2;
	else if (M.miscare(i + 1, j + 1) == 1)
	{
		i = i + 1;
		j = j + 1;
		return 1;
	}
	else if (M.miscare(i + 1, j + 1) == 2)
		return 2;
	else if (M.miscare(i, j - 1) == 1)
	{
		j = j - 1;
		return 1;
	}
	else if (M.miscare(i, j - 1) == 2)
		return 2;
	else if (M.miscare(i, j + 1) == 1)
	{
		j = j + 1;
		return 1;
	}
	else if (M.miscare(i, j + 1) == 2)
		return 2;
	else if (M.miscare(i - 1, j - 1) == 0)
		return 0;
	else if (M.miscare(i + 1, j + 1) == 0)
		return 0;
	else if (M.miscare(i, j - 1) == 0)
		return 0;
	else if (M.miscare(i, j + 1) == 0)
		return 0;
}

int player3::move(harta& M) {
	if (M.miscare(i + 1, j - 1) == 1)
	{
		i = i + 1;
		j = j - 1;
		return 1;
	}
	else if (M.miscare(i + 1, j - 1) == 2)
		return 2;
	else if (M.miscare(i - 1, j + 1) == 1)
	{
		i = i - 1;
		j = j + 1;
		return 1;
	}
	else if (M.miscare(i - 1, j + 1) == 2)
		return 2;
	else if (M.miscare(i - 1, j) == 1)
	{
		i = i - 1;
		return 1;
	}
	else if (M.miscare(i - 1, j) == 2)
		return 2;
	else if (M.miscare(i + 1, j) == 1)
	{
		i = i + 1;
		return 1;
	}
	else if (M.miscare(i + 1, j) == 2)
		return 2;
	else if (M.miscare(i + 1, j - 1) == 0)
		return 0;
	else if (M.miscare(i - 1, j + 1) == 0)
		return 0;
	else if (M.miscare(i - 1, j) == 0)
		return 0;
	else if (M.miscare(i + 1, j) == 0)
		return 0;
}

int player4::move(harta& M) {
	if (M.miscare(i - 2, j) == 1)
	{
		i = i - 2;
		return 1;
	}
	else if (M.miscare(i - 2, j) == 2)
		return 2;
	else if (M.miscare(i + 2, j) == 1)
	{
		i = i + 2;
		return 1;
	}
	else if (M.miscare(i + 2, j) == 2)
		return 2;
	else if (M.miscare(i, j - 2) == 1)
	{
		j = j - 2;
		return 1;
	}
	else if (M.miscare(i, j - 2) == 2)
		return 2;
	else if (M.miscare(i, j + 2) == 1)
	{
		j = j + 2;
		return 1;
	}
	else if (M.miscare(i, j + 2) == 2)
		return 2;
	else if (M.miscare(i - 2, j) == 0)
		return 0;
	else if (M.miscare(i + 2, j) == 0)
		return 0;
	else if (M.miscare(i, j - 2) == 0)
		return 0;
	else if (M.miscare(i, j + 2) == 0)
		return 0;
}
#include <iostream>
#include "Mapa.h"
#include "Runda.h"
#include "Player.h"

runda::runda() {	//implementarea constructorului fara parametrii
	int i;
	jucatori = new int[4];
	for (i = 0; i < 4; i++)
		jucatori[i] = 0;
	nr_jucatori = 4;
}
void runda::play() {
	int jucator, i, poz;
	harta M;
	for (i = 0; i < 4; i++) {
		cout << "Alegeti tipul agentului: ";
		cin >> jucator;
		jucatori[i] = jucator;
		cout << endl;
		cout << "Alegeti coltul de inceput: ";
		cin >> poz;
		while (M.adaugare_p(poz, i) == false) {
			cout << "Alegeti alt colt: ";
			cin >> poz;
		}
		cout << "Jucator adaugat in coltul: " << poz;
		cout << endl;
	}
	player* a;
	player* b;
	player* c;
	player* d;
	for (i = 0; i < 4; i++) { //declararea playerilor in functie de tipuri
		if (i == 0) {
			player1 a1;
			player2 a2;
			player3 a3;
			player4 a4;
			if (jucatori[i] == 1) {
				a = &a1;
				a->linie(M, i);
				a->coloana(M, i);
			}
			else if (jucatori[i] == 2) {
				a = &a2;
				a->linie(M, i);
				a->coloana(M, i);
			}
			else if (jucatori[i] == 3) {
				a = &a3;
				a->linie(M, i);
				a->coloana(M, i);
			}
			else {
				a = &a4;
				a->linie(M, i);
				a->coloana(M, i);
			}
		}
		else if (i == 1) {
			player1 b1;
			player2 b2;
			player3 b3;
			player4 b4;
			if (jucatori[i] == 1) {
				b = &b1;
				b->linie(M, i);
				b->coloana(M, i);
			}
			else if (jucatori[i] == 2) {
				b = &b2;
				b->linie(M, i);
				b->coloana(M, i);
			}
			else if (jucatori[i] == 3) {
				b = &b3;
				b->linie(M, i);
				b->coloana(M, i);
			}
			else {
				b = &b4;
				b->linie(M, i);
				b->coloana(M, i);
			}
		}
		else if (i == 2) {
			player1 c1;
			player2 c2;
			player3 c3;
			player4 c4;
			if (jucatori[i] == 1) {
				c = &c1;
				c->linie(M, i);
				c->coloana(M, i);
			}
			else if (jucatori[i] == 2) {
				c = &c2;
				c->linie(M, i);
				c->coloana(M, i);
			}
			else if (jucatori[i] == 3) {
				c = &c3;
				c->linie(M, i);
				c->coloana(M, i);
			}
			else {
				c = &c4;
				c->linie(M, i);
				c->coloana(M, i);
			}
		}
		else if (i == 3) {
			player1 d1;
			player2 d2;
			player3 d3;
			player4 d4;
			if (jucatori[i] == 1) {
				d = &d1;
				d->linie(M, i);
				d->coloana(M, i);
			}
			else if (jucatori[i] == 2) {
				d = &d2;
				d->linie(M, i);
				d->coloana(M, i);
			}
			else if (jucatori[i] == 3) {
				d = &d3;
				d->linie(M, i);
				d->coloana(M, i);
			}
			else {
				d = &d4;
				d->linie(M, i);
				d->coloana(M, i);
			}
		}
	}

	while (M.castig() != 1 && nr_jucatori != 0) {	//miscarea jucatorilor pe harta si modificarea hartii
		if (jucatori[0] != -1)
		{
			if (a->move(M) == 2)	//jucatorul gaseste o comoara
			{
				jucatori[1] = -1;
				nr_jucatori--;
				M.gasit(0);
			}
			else if (a->move(M) == 0)	//jucatorul nu mai are locuri sa se miste
			{
				jucatori[i] = -1;
				nr_jucatori--;
				cout << "Jucatorul " << i << "a pierdut" << endl;
			}
		}
		else if (jucatori[1] != -1)
		{
			if (b->move(M) == 2)
			{
				jucatori[1] = -1;
				nr_jucatori--;
				M.gasit(1);
			}
			else if (b->move(M) == 0)
			{
				jucatori[i] = -1;
				nr_jucatori--;
				cout << "Jucatorul " << i << "a pierdut" << endl;
			}
		}
		else if (jucatori[2] != -1)
		{
			if (c->move(M) == 2)
			{
				jucatori[1] = -1;
				nr_jucatori--;
				M.gasit(2);
			}
			else if (c->move(M) == 0)
			{
				jucatori[i] = -1;
				nr_jucatori--;
				cout << "Jucatorul " << i << "a pierdut" << endl;
			}
		}
		else if (jucatori[3] != -1)
		{
			if (d->move(M) == 2)
			{
				jucatori[1] = -1;
				nr_jucatori--;
				M.gasit(3);
			}
			else if (d->move(M) == 0)
			{
				jucatori[i] = -1;
				nr_jucatori--;
				cout << "Jucatorul " << i << "a pierdut" << endl;
			}
		}
		M.afisare();
	}
	for (i = 0; i < 4; i++)	//afisarea jucatorilor care au gasit comori
		if (jucatori[i] != -1)
			cout << "Jucatorul " << i << " a gasit comoara" << endl;
}
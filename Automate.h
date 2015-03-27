#include <iostream>
#include "Etat.h"
#include <list>

using namespace std;

#ifndef AUTOMATE_H
#define AUTOMATE_H

class Automate
{
public:
	Automate();
	Automate(string nomDuFichier);
	~Automate();

	//tache 9
	Etat* returnEtatInit();
	//tache 10
	void ajouterEtat(Etat* e);

	//RF1
	bool estDeterministe();
	//RF2
	bool estReactif();
	//RF3
	Automate minimiserMoore();
	//RF4
	string CalculerSortie(string mot);
	//RF5
	bool conversionMooreToMealy(Automate a1); // automate.conversionMooreToMealy() return true si la conversion se fait
	//RF6
	bool conversionMealyToMoore(Automate a2); // automate.conversionMooreToMealy() return true si la conversion se fait
	//RF7

private:
	list<Etat*> listeEtat;
	string typeDeLaMachine;
	int nombreDetat;
};

#endif
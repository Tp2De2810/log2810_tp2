#pragma once

#include <iostream>
#include <vector>
#include "Transition.h"

using namespace std;


#ifndef ETAT_H
#define ETAT_H

class Etat
{
public:
	Etat(); 
	~Etat();

	//tache 3
	bool existeTransition(char e);
	//tache 4
	//ListeEtat cible(char e)
	//tache 5
	//ListeEtat cible()
	//tache 6
	//void ajouterTransition(ListeEtiquettes c, Etat e)
	//tache 7
	//ListeEtiquettes listerEtiquettes()
	

	// les getteurs, setteurs
	void setEtatInit(bool ini);
	void setEtatFinal(bool fin);
	void setNumEtat(int numEt);
	void setProchainEtat(int etatPro);

	bool getEtatInit()const;
	bool getEtatFinal()const;
	int getNumEtat()const;
	int getProchainEtat()const;


	void affichage()const;

private:
	bool init;		// precise si l'état est initial ou pas
	bool finale;	// precise si l'état est final
	int numEtat;    // chaque etat est désigné par un entier
	// le choix des conteneurs doit se faire selon le besoin et la méthode de travail suivie
	vector<Transition*> transitionSource;  // il s'agit des transitions depuis la source vers l'état actuel
	//  au cas ou il s'agit d'une machine de moore
	int prochainEtat;

};

#endif
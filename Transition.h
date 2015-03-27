#pragma once
#include <iostream>
#include "Etat.h"

using namespace std;

#ifndef TRANSITION_H
#define TRANSITION_H

class Transition
{
public:
	Transition();
	Transition(Etat* e1,Etat* e2, char etiq); 
	~Transition();

private:
	Etat* etatDeDepart;
	Etat* etatArrive;
	char* etiquette;
};

#endif
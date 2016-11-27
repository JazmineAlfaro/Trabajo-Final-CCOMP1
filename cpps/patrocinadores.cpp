#include <iostream>
#include "patrocinadores.h"
using namespace std;

Patrocinadores::Patrocinadores(){
	this->name = " ";
	this->ingresos = 0;
}
string Patrocinadores::getName(){return name;}
int Patrocinadores::getIngresos(){return ingresos;}
void Patrocinadores::setName(string neim){this->name = neim;}
void Patrocinadores::setIngresos(int ing){this->ingresos = ing;}

#include <iostream>
#include "escuderia.h"
#include "persona.h"
#include "carro.h"
#include "patrocinadores.h"


using namespace std;

Escuderia::Escuderia(){
	Patrocinadores *a;
	Persona Jefito;
	Car carrito;
	a = new Patrocinadores[0];
	this->Sponsors = a;
	this->numSponsors = 0;
	this->JefeDeIngenieros = Jefito;
	this->Carro = carrito;
	
}
void Escuderia::setPilotos(Persona Driver){;} //ARREGLAR
void Escuderia::setSponsor(Patrocinadores Sponsor){
	Patrocinadores *a;
	a = new Patrocinadores[numSponsors + 1];
	int i;
	numSponsors++;
	for(i = 0; i<numSponsors; i++)
		a[i] = Sponsors[i];
	a[i] = Sponsor;
	delete [] Sponsors;
	this->Sponsors = a;
}
void Escuderia::setName(char* neim){this->name = neim;}
void Escuderia::setJefe(Persona Jefe){this->JefeDeIngenieros = Jefe;}
void Escuderia::setMecanicos(Persona Mecanico){;}
void Escuderia::setCarro(Car car){this->Carro = car;}
char* Escuderia::getName(){return name;}
Persona Escuderia::getJefito(){return JefeDeIngenieros;}
Car Escuderia::getCarro(){return Carro;}
Patrocinadores Escuderia::getSponsor(int pos){return Sponsors[pos];}

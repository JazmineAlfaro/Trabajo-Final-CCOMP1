#include <iostream>
#include "persona.h"
#include "piloto.h"
#include "carro.h"
#include "patrocinadores.h"
#include "escuderia.h"

using namespace std;

Escuderia::Escuderia(){
	//Persona Jefito;
	Patrocinadores *a;
	a = new Patrocinadores[0];
	Piloto *b;
	b = new Piloto[0];
	Car carrito;
	this->numPilotos = 0;
	this->numSponsors = 0;
	this->Sponsors = a;
	this->Pilotos = b;
	//this->jefeDeIngenieros = Jefito;
	this->carro = carrito;
	
}
void Escuderia::setPilotos(Piloto Driver){
	Piloto *a;
	a = new Piloto[numPilotos + 1];
	int i;
	for(i = 0; i<numPilotos; i++)
		a[i] = Pilotos[i];
	numPilotos++;
	a[i] = Driver;
	delete [] Pilotos;
	this->Pilotos = a;//ARREGLAR
}
void Escuderia::setSponsor(Patrocinadores Sponsor){
	Patrocinadores *a;
	a = new Patrocinadores[numSponsors + 1];
	int i;
	for(i = 0; i<numSponsors; i++)
		a[i] = Sponsors[i];
	numSponsors++;
	a[i] = Sponsor;
	delete [] Sponsors;
	this->Sponsors = a;
}
void Escuderia::setName(char* neim){this->name = neim;}
void Escuderia::setJefe(Persona Jefe){/*this->jefeDeIngenieros = Jefe*/;}
void Escuderia::setMecanicos(Persona Mecanico){;}
void Escuderia::setCarro(Car car){this->carro = car;}
char* Escuderia::getName(){return name;}
Persona Escuderia::getJefito(){/*return jefeDeIngenieros*/;}
Car Escuderia::getCarro(){return carro;}
Patrocinadores Escuderia::getSponsor(int pos){
	int i;
	Patrocinadores *a;
	a = new Patrocinadores[0];
	for (i = 0; i<pos+1; i++)
		a[i] = Sponsors[i];
	return a[i-1];
	delete [] a;
}
Piloto Escuderia::getPiloto(int pos){
	int i;
	Piloto *a;
	a = new Piloto[0];
	for (i = 0; i<pos+1; i++)
		a[i] = Pilotos[i];
	return a[i-1];
	delete [] a;
}


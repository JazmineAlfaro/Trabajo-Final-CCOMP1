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
	this->numPilotoss = 0;
	this->numSponsorss = 0;
	this->Sponsors = a;
	this->Pilotos = b;
	//this->jefeDeIngenieros = Jefito;
	this->carro = carrito;
	this->name = " ";
	
}
void Escuderia::setPilotos(Piloto Driver){
	Piloto *a;
	a = new Piloto[numPilotoss + 1];
	int i;
	for(i = 0; i<numPilotoss; i++)
		a[i] = Pilotos[i];
	numPilotoss++;
	a[i] = Driver;
	delete [] Pilotos;
	this->Pilotos = a;//ARREGLAR
}

void Escuderia::eliminarPilotos(int i){
	Piloto *a;
	a = new Piloto[numPilotoss - 1];
	int j;
	for(j = 0; j < i; j++)
		a[j] = Pilotos[j];
	j++;
	for(j; j<numPilotoss; j++)
		a[j] = Pilotos[j];
	numPilotoss--;
	delete [] Pilotos;
	this->Pilotos = a;
}
void Escuderia::setSponsor(Patrocinadores Sponsor){
	Patrocinadores *a;
	a = new Patrocinadores[numSponsorss + 1];
	int i;
	for(i = 0; i<numSponsorss; i++)
		a[i] = Sponsors[i];
	numSponsorss++;
	a[i] = Sponsor;
	delete [] Sponsors;
	this->Sponsors = a;
}
void Escuderia::eliminarSponsors(int i){
	Patrocinadores *a;
	a = new Patrocinadores[numSponsorss -1];
	int j;
	for(j = 0; j<i; j++)
		a[j] = Sponsors[j];
	j++;
	for(j; j<numSponsorss; j++)
		a[j] = Sponsors[j];
	numSponsorss--;
	delete[] Sponsors;
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
void Escuderia::imprimirSponsors(){
	int i;
	Patrocinadores G;
	for (i = 0; i<numSponsorss; i++){
		cout << "Patrocinador " << i+1 << endl;
		G = Sponsors[i];
		cout << G.getName() << endl;
	}
	
}
void Escuderia::imprimirPilotos(){
	int i;
	Piloto G;
	for(i=0;i<numPilotoss; i++){
		cout << "Piloto " << i+1 << endl;
		G = Pilotos[i];
		cout << G.getname() << " " << G.getLastName() << endl;
	}
}


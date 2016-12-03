#include <iostream>
#include "persona.h"
#include "piloto.h"
#include "carro.h"
#include "patrocinadores.h"
#include "escuderia.h"

using namespace std;

Escuderia::Escuderia(){
	Piloto *newArrayP;
	Patrocinadores *newArrayS;
	Car carrito;
	newArrayP = new Piloto[0];
	newArrayS = new Patrocinadores[0];
	this->numPilotoss = 0;
	this->numSponsorss = 0;
	this->sponsors = newArrayS;
	this->pilotos = newArrayP;
	this->carro = carrito;
	this->name = " ";
	
}
void Escuderia::setPilotos(Piloto Driver){
	Piloto *temp;
	int i;
	temp = new Piloto[numPilotoss+1];
	for(i = 0; i<numPilotoss; i++)
		temp[i] = pilotos[i];
	temp[i] = Driver;
	delete [] pilotos;
	this->pilotos = temp;
	numPilotoss++;
}

void Escuderia::eliminarPilotos(int i){
	Piloto *temp;
	temp = new Piloto[numPilotoss-1];
	int j;
	for(j = 0; j < i; j++)
		temp[j] = pilotos[j];
	j++;
	for(j; j<numPilotoss; j++)
		temp[j-1] = pilotos[j];
	numPilotoss--;
	delete [] pilotos;
	this->pilotos = temp;
}
void Escuderia::setSponsor(Patrocinadores Sponsor){
	Patrocinadores *temp;
	int i;
	temp = new Patrocinadores[numSponsorss+1];
	for(i = 0; i<numSponsorss; i++)
		temp[i] = sponsors[i];
	temp[i] = Sponsor;
	delete [] sponsors;
	this->sponsors = temp;
	numSponsorss++;
}
void Escuderia::eliminarSponsors(int i){
	Patrocinadores *temp;
	temp = new Patrocinadores[numSponsorss-1];
	int j;
	for(j = 0; j < i; j++)
		temp[j] = sponsors[j];
	j++;
	for(j; j<numSponsorss; j++)
		temp[j-1] = sponsors[j];
	numSponsorss--;
	delete [] sponsors;
	this->sponsors = temp; 
}
void Escuderia::setName(string neim){this->name = neim;}
void Escuderia::setCarro(Car car){this->carro = car;}
string Escuderia::getName(){return name;}
Car Escuderia::getCarro(){return carro;}
Patrocinadores Escuderia::getSponsor(int pos){
	return sponsors[pos-1];
}
Piloto Escuderia::getPiloto(int pos){
	Piloto Temp = pilotos[pos-1];
	return Temp;
}
void Escuderia::imprimirSponsors(){
	int i;
	Patrocinadores G;
	if (numSponsorss == 0){
		cout << "No hay patrocinadores." << endl;
	} else {
	for (i = 0; i<numSponsorss; i++){
		cout << "Patrocinador " << i+1 << endl;
		G = sponsors[i];
		cout << G.getName() << endl;
	}
	}
	
}
void Escuderia::imprimirPilotos(){
	int i;
	Piloto G;
	if (numPilotoss == 0){
		cout << "No hay pilotos." << endl;
	} else {
	for(i=0;i<numPilotoss; i++){
		cout << "Piloto " << i+1 << endl;
		G = pilotos[i];
		cout << G.getname() << " " << G.getLastName() << endl;
	}
	}
}



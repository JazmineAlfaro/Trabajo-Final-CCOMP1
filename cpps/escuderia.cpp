#include <iostream>
#include <vector>
#include "persona.h"
#include "piloto.h"
#include "carro.h"
#include "patrocinadores.h"
#include "escuderia.h"

using namespace std;

Escuderia::Escuderia(){
	vector<Piloto> newVectorP;
	vector<Patrocinadores> newVectorS;
	Car carrito;
	this->numPilotoss = 0;
	this->numSponsorss = 0;
	this->sponsors = newVectorS;
	this->pilotos = newVectorP;
	this->carro = carrito;
	this->name = " ";
	
}
void Escuderia::setPilotos(Piloto Driver){
	pilotos.push_back(Driver);
	numPilotoss++;
}

void Escuderia::eliminarPilotos(int i){
	vector<Piloto> temp;
	int j;
	for(j = 0; j < i; j++)
		temp.push_back(pilotos.at(j));
	j++;
	for(j; j<numPilotoss; j++)
		temp.push_back(pilotos.at(j));
	numPilotoss--;
	this->pilotos = temp; 
}
void Escuderia::setSponsor(Patrocinadores Sponsor){
	sponsors.push_back(Sponsor);
	numSponsorss++;
}
void Escuderia::eliminarSponsors(int i){
	vector<Patrocinadores> temp;
	int j;
	for(j = 0; j<i; j++)
		temp.push_back(sponsors.at(j));
	j++;
	for(j; j<numSponsorss; j++)
		temp.push_back(sponsors.at(j));
	numSponsorss--;
	this->sponsors = temp; 
}
void Escuderia::setName(string neim){this->name = neim;}
void Escuderia::setMecanicos(Persona Mecanico){;}
void Escuderia::setCarro(Car car){this->carro = car;}
string Escuderia::getName(){return name;}
Car Escuderia::getCarro(){return carro;}
Patrocinadores Escuderia::getSponsor(int pos){
	int i;
	for (i = 0; i<pos+1; i++)
		;
	return sponsors[i-1];
}
Piloto Escuderia::getPiloto(int pos){
	int i;
	for (i = 0; i<pos+1; i++)
		;
	return pilotos[i-1];
}
void Escuderia::imprimirSponsors(){
	int i;
	Patrocinadores G;
	for (i = 0; i<numSponsorss; i++){
		cout << "Patrocinador " << i+1 << endl;
		G = sponsors[i];
		cout << G.getName() << endl;
	}
	
}
void Escuderia::imprimirPilotos(){
	int i;
	Piloto G;
	for(i=0;i<numPilotoss; i++){
		cout << "Piloto " << i+1 << endl;
		G = pilotos[i];
		cout << G.getname() << " " << G.getLastName() << endl;
	}
}





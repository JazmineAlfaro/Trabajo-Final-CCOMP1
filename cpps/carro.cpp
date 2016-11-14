#include "carro.h"
#include "escuderia.h"

Car::Car(){
	Escuderia Lel;
	this->name = " ";
	this->engine = " ";
	this->Team = Lel;
	this->number = 0;
}
void Car::setName(char* neim){
	this->name = neim;
}
void Car::setEngine(char* eng){this->engine = eng;}
void Car::setEscuderia(Escuderia tim){this->Team = tim;}
void Car::setNumber(int num){this->number = num;}
char* Car::getName(){return name;}
char* Car::getEngine(){return engine;}
Escuderia Car::getEscuderia(){return Team;}
int Car::getNumber(){return number;}

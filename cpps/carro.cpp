#include "carro.h"
#include "escuderia.h"

Car::Car(){
	this->name = " ";
	this->engine = " ";
}
void Car::setName(char* neim){
	this->name = neim;
}
void Car::setEngine(char* eng){this->engine = eng;}
char* Car::getName(){return name;}
char* Car::getEngine(){return engine;}

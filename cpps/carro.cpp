#include "carro.h"
#include "escuderia.h"
#include <iostream>
using namespace std;
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
void Car::imprimirCarro(){
	cout << "Coche:  " << name << endl;
	cout << "Motor:  " << engine << endl;
}

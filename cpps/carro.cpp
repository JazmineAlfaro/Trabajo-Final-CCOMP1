#include "carro.h"
#include "escuderia.h"
#include <iostream>
using namespace std;
Car::Car(){
	this->name = " ";
	this->engine = " ";
}
void Car::setName(string neim){
	this->name = neim;
}
void Car::setEngine(string eng){this->engine = eng;}
string Car::getName(){return name;}
string Car::getEngine(){return engine;}
void Car::imprimirCarro(){
	cout << "Coche:  " << name << endl;
	cout << "Motor:  " << engine << endl;
}


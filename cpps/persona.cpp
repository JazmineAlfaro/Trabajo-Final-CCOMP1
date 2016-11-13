#include "persona.h"
#include<iostream>

using namespace std;
Persona::Persona(){
	this->name = " ";
	this->age = 0;
	this->id = 0;
	this->country = " ";
	this->sex = 'N'; //undefined sex
}

Persona::Persona(char* neim, int eish, int aidi, char* contri, char sexo){
	this->name = neim;
	this->age = eish;
	this->id = aidi;
	this->country = contri;
	this->sex = sexo;
}
//Persona::~Persona();
int Persona::getAge(){ return age;}
int Persona::getID(){return id;}
char* Persona::getname(){return name;}
char* Persona::getCountry(){return country;}
char Persona::getSex(){return sex;}
void Persona::setAge(int eish){
	this->age = eish;
}
void Persona::setID(int aidi){
	this->id = aidi;
}
void Persona::setName(char* neim){
	this->name = neim;
}
void Persona::setCountry(char* contri){
	this->country = contri;
}
void Persona::setSex(char sexo){
	this->sex = sexo;
}

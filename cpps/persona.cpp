#include<string.h>
#include "persona.h"
#include<iostream>

using namespace std;
Persona::Persona(){
	this->name = " ";
	this->age = 0;
	this->country = " ";
	this->sex = 'N'; //undefined sex
}

/*Persona::Persona(char* neim, int eish, char* contri, char sexo){
	this->name = neim;
	this->age = eish;
	this->country = contri;
	this->sex = sexo;
}*/
//Persona::~Persona();
int Persona::getAge(){ return age;}
char* Persona::getname(){return name;}
//string Persona::getname(){return name;}
char* Persona::getCountry(){return country;}
//string Persona::getCountry(){return country;}
char Persona::getSex(){return sex;}
void Persona::setAge(int eish){
	this->age = eish;
}
void Persona::setName(char* neim){
//void Persona::setName(string neim){
this->name = neim;
}
void Persona::setCountry(char* contri){
//void Persona::setCountry(string contri){
	this->country = contri;
}
void Persona::setSex(char sexo){
	this->sex = sexo;
}
void Persona::printSex(){
	switch(sex){
case 'N':
	cout << "Undefined sex" << endl;
	break;
case 'F':
	cout << "Female" << endl;
	break;
case 'M':
	cout << "Male" << endl;
	break;
default:
	cout << "Sex not recognized" << endl;
	break;
	}
}

#include "persona.h"
#include "piloto.h"
#include <iostream>
using namespace std;

Piloto::Piloto(){
	this->name = " ";
	this->age = 0;
	this->country = " ";
	this->sex = 'N';
	this->points = 0;
	this->licensep = 10;
	this->pay = 0;
	this->number = 0;
}
void Piloto::addPoints(int p){
	this->points += p;
}
void Piloto::substractLPoints(int p){
	this->licensep -= p;
}
void Piloto::setPay(int p){
	this-> pay = p;
}
void Piloto::modifyPay(int p){
	this-> pay += p;
}
void Piloto::setNumber(int n){
	this->number = n;
}
int Piloto::getPoints(){return points;}
int Piloto::getLPoints(){return licensep;}
int Piloto::getPay(){return pay;}
int Piloto::getNumber(){return number;}

#include<iostream>
#include <vector>
#include <string.h>
#include "persona.h"
#include "carro.h"
#include "patrocinadores.h"
#include "escuderia.h"
#include "piloto.h"
#include "databaseask.h"
#include "database.h"
	//template <typename T>;
	
using namespace std;

int Database::numPersonas = 0;
int Database::numCarros = 0;
int Database::numSponsors = 0;
int Database::numEscuderias = 0;
int Database::numPilotos = 0;

vector<Persona> hola;
vector<Car> hola1;
vector<Patrocinadores> hola2;
vector<Escuderia> hola3;
vector<Piloto> hola4;

vector<Persona> Database::storePersona = hola;
vector<Car> Database::storeCar =  hola1;
vector<Patrocinadores> Database::storeSponsor = hola2;
vector<Escuderia> Database::storeEscuderia = hola3;
vector<Piloto> Database::storePiloto = hola4;

Database::Database(){
	DatabaseAsk Test;
	this->myDB = Test;
}
void Database::instEscudCar(){
	;
}
void Database::instEscudPil(){
	;
}
void Database::instEscudSpon(){
	;
}
bool Database::ingresarMas(){
	cout << "¿Desea agregar otro valor?(s/n)" << endl;
	char rpta;
	cin >> rpta;
	if ((rpta == 'S') || (rpta == 's'))
		return true;
	else
		return false;
}
int Database::getNumPersonas(){return numPersonas;}

void Database::menuIngrPer(){
	Persona newPersona;
	char* name;
	name = myDB.askName();
	char* lname = myDB.askLName();
	int age = myDB.askAge();
	char sex = myDB.askSex();
	char* country = myDB.askCountry();
	newPersona.setAge(age);
	newPersona.setCountry(country);
	newPersona.setName(name);
	newPersona.setSex(sex);
	newPersona.setLastName(lname);
	numPersonas++;
	storePersona.push_back(newPersona);
}
void Database::getPersona(){
	int i;
	Persona Get;
	if (numPersonas == 0){
		cout << "No hay datos para mostrar." << endl;
	} else {
		for(i = 0; i<numPersonas; i++){
			Get = storePersona[i];
			cout << "Persona " << i+1 << endl;
			cout << "Nombre: " << Get.getname() << " " << Get.getLastName() << endl;
			cout << "Edad: " << Get.getAge() << endl;
			Get.printSex();
			cout << "Pais: " << Get.getCountry() << endl;
		}
	}
}
int Database::getNumPilotos(){return numPilotos;}
void Database::menuIngrPil(){
	Piloto newPiloto;
	char* name;
	name = myDB.askName();
	char* lname;
	lname = myDB.askLName();
	int age = myDB.askAge();
	char sex = myDB.askSex();
	char* country = myDB.askCountry();
	int points = myDB.askPoints();
	int pay = myDB.askPay();
	int number = myDB.askNumber();
	newPiloto.setAge(age);
	newPiloto.setCountry(country);
	newPiloto.setLastName(lname);
	newPiloto.setName(name);
	newPiloto.setNumber(number);
	newPiloto.setPay(pay);
	newPiloto.setSex(sex);
	numPilotos++;
	storePiloto.push_back(newPiloto);
}
void Database::getPiloto(){
	int i;
	Piloto Get;
	if (numPilotos == 0){
		cout << "No hay datos para visualizar." << endl;
	} else {
		for(i=0; i<numPilotos; i++){
			Get = storePiloto[i];
			cout << "Piloto " << i+1 << endl;
			cout << "Nombre: " << Get.getname() << " " << Get.getLastName() << endl;
			cout << "Edad: " << Get.getAge() << endl;
			Get.printSex();
			cout << "Pais: " << Get.getCountry() << endl;
			cout << "Puntos: " << Get.getPoints() << endl;
			cout << "Puntos de la licencia: " << Get.getLPoints() << endl;
			cout << "Paga: " << Get.getPay() << endl;
			cout << "Numero: " << Get.getNumber() << endl;
		}
	}
}
int Database::getNumCarros(){return numCarros;}
void Database::menuIngrCoc(){
	Car newCar;
	char* myName = myDB.askName();
	char* myEngine = myDB.askEngine();
	newCar.setEngine(myEngine);
	newCar.setName(myName);
	numCarros++;
	storeCar.push_back(newCar);
}
void Database::getCarro(){
	int i;
	Car Get;
	if (numCarros == 0){
		cout << "No hay datos para visualizar." << endl;
	} else {
		for (i = 0; i<numCarros; i++){
			Get = storeCar[i];
			cout << "Carro " << i+1 << endl;
			cout << "Nombre: " << Get.getName() << endl;
			cout << "Motor: " << Get.getEngine() << endl;
		//cout << Get;
		}
	}
}
int Database::getNumSpon(){return numSponsors;}
void Database::menuIngrSpon(){
	Patrocinadores newSponsor;
	char* myName = myDB.askName();
	int myIngresos = myDB.askIngresos();
	newSponsor.setIngresos(myIngresos);
	newSponsor.setName(myName);
	numSponsors++;
	storeSponsor.push_back(newSponsor);
}
void Database::getSponsor(){
	int i;
	Patrocinadores Get;
	if (numSponsors == 0){
		cout << "No hay datos para visualizar." << endl;
	} else {
		for(i = 0; i<numSponsors; i++){
			Get = storeSponsor[i];
			cout << "Patrocinador " << i+1 << endl;
			cout << "Nombre: " << Get.getName() << endl;
			cout << "Ingresos: " << Get.getIngresos() << endl;
		}
	}
}
int Database::getNumEscuderias(){return numEscuderias;}
void Database::menuIngrEsc(){
	int i;
	Escuderia newEscuderia;
	char* myName = myDB.askName();
	getCarro();
	i = myDB.askNumber();
	if ((i == 0) || (i>numCarros)){
		cout << "Ingrese un numero valido." << endl;
		i = myDB.askNumber();
	} else if (i <= numCarros){
		newEscuderia.setCarro(storeCar[i-1]); 
	}
	do{
		getSponsor();
		i = myDB.askNumber();
		if ((i == 0)||(i>numSponsors)){
			cout << "Ingrese un numero valido." << endl;
			i = myDB.askNumber();
		} else if (i<= numSponsors){
			newEscuderia.setSponsor(storeSponsor[i-1]);
		}
	}while(ingresarMas());
	do{
		getPiloto();
		i = myDB.askNumber();
		if ((i == 0)||(i>numPilotos)){
			cout << "Ingrese un numero valido." << endl;
			i = myDB.askNumber();
		} else if (i <= numPilotos) {
			newEscuderia.setPilotos(storePiloto[i-1]);
		}
	}while(ingresarMas());
	numEscuderias++;
	storeEscuderia.push_back(newEscuderia); //Agregar el booleano que pregunta si quieres agregar mas datos CHECK
}
void Database::getEscuderia(){
	int i;
	Escuderia Get;
	Car Carro;
	if (numEscuderias == 0){
		cout << "No hay datos para visualizar." << endl;
	} else {
		for(i=0; i<numEscuderias; i++){
			Get = storeEscuderia[i];
			cout << "Escuderia " << i+1 << endl;
			cout << "Nombre: " << Get.getName() << endl;
			Get.imprimirPilotos();
			Get.imprimirSponsors();
			Carro = Get.getCarro();
			Carro.imprimirCarro();
		}
	}
}
Persona Database::getPersonaVector(int i){
	return this->storePersona[i];
}
void Database::modificarPersonaVector(Persona P, int i){
	storePersona.at(i) = P;
}
Piloto Database::getPilotoVector(int i){
	return this->storePiloto[i];
}
void Database::modificarPilotoVector(Piloto P, int i){
	storePiloto.at(i) = P;
}
Car Database::getCarVector(int i){
	return this->storeCar.at(i);
}
void Database::modificarCarVector(Car C, int i){
	storeCar.at(i) = C;
}
Patrocinadores Database::getSponsorVector(int i){
	return this->storeSponsor.at(i);
}
void Database::modificarSponsorVector(Patrocinadores P, int i){
	storeSponsor.at(i) = P;
}
void Database::deleteVectorPersona(int i){
	int j = 0;
	vector<Persona> temp;
	for(j; j<i; j++)
		//temp.at(j) = storePersona.at(j);
		temp.push_back(storePersona.at(j));
	j++;
	for(j; j<numPersonas; j++)
		temp.push_back(storePersona.at(j));
	storePersona = temp;
	numPersonas--;	
}
void Database::deleteVectorPiloto(int i){
	int j = 0;
	vector<Piloto> temp;
	for(j; j<i; j++)
		temp.push_back(storePiloto.at(j));
	j++;
	for(j; j<numPilotos; j++)
		temp.push_back(storePiloto.at(j));
	storePiloto = temp;
	numPilotos--;	
}
void Database::deleteVectorCar(int i){
	int j = 0;
	vector<Car> temp;
	for(j; j<i; j++)
		temp.push_back(storeCar.at(j));
	j++;
	for(j; j<numCarros; j++)
		temp.push_back(storeCar.at(j));
	storeCar = temp;
	numCarros--;
}
void Database::deleteVectorSponsor(int i){
	int j = 0;
	vector<Patrocinadores> temp;
	for(j; j<i; j++)
		temp.push_back(storeSponsor.at(j));
	j++;
	for(j; j<numPilotos; j++)
		temp.push_back(storeSponsor.at(j));
	storeSponsor = temp;
	numPilotos--;
}


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

using namespace std;

int Database::numPersonas = 0;
int Database::numCarros = 0;
int Database::numSponsors = 0;
int Database::numEscuderias = 0;
int Database::numPilotos = 0;

Database::Database(){
	vector<Persona> hola;
	vector<Car> hola1;
	vector<Patrocinadores> hola2;
	vector<Escuderia> hola3;
	vector<Piloto> hola4;
	DatabaseAsk Test;
	this->storePersona = hola;
	this->storeCar = hola1;
	this->storeSponsor = hola2;
	this->storeEscuderia = hola3;
	this->storePiloto = hola4;
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
	for(i = 0; i<numPersonas; i++){
		Get = storePersona[i];
		cout << "Persona " << i+1 << endl;
		cout << "Nombre: " << Get.getname() << endl;
		cout << "Edad: " << Get.getAge() << endl;
		Get.printSex();
		cout << "Pais: " << Get.getCountry() << endl;
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
	for (i = 0; i<numCarros; i++){
		Get = storeCar[i];
		cout << "Carro " << i+1 << endl;
		cout << "Nombre: " << Get.getName() << endl;
		cout << "Motor: " << Get.getEngine() << endl;
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
	for(i = 0; i<numSponsors; i++){
		Get = storeSponsor[i];
		cout << "Patrocinador " << i+1 << endl;
		cout << "Nombre: " << Get.getName() << endl;
		cout << "Ingresos: " << Get.getIngresos() << endl;
	}
}
int Database::getNumEscuderias(){return numEscuderias;}
void Database::menuIngrEsc(){
	int i;
	Escuderia newEscuderia;
	char* myName = myDB.askName();
	getCarro();
	i = myDB.askNumber();
	if (i == 0){
		;
	} else if (i <= numCarros){
		newEscuderia.setCarro(storeCar[i-1]); 
	} else if (i > numCarros){
		cout << "Ingrese un numero valido." << endl;
		i = myDB.askNumber();
	}
    getSponsor();
	i = myDB.askNumber();
	if (i == 0){
		;
	} else if (i<= numSponsors){
		newEscuderia.setSponsor(storeSponsor[i-1]);
	} else if (i>numSponsors){
		cout << "Ingrese un numero valido." << endl;
		i = myDB.askNumber();
	}
	getPiloto();
	i = myDB.askNumber();
	if (i == 0){
		;
	} else if (i <= numPilotos) {
		newEscuderia.setPilotos(storePiloto[i-1]);
	} else if (i > numPilotos) {
		cout << "Ingrese un numero valido." << endl;
		i = myDB.askNumber();
	}
	numEscuderias++;
	storeEscuderia.push_back(newEscuderia); //Agregar el booleano que pregunta si quieres agregar mas datos
}
void Database::getEscuderia(){
	int i;
	Escuderia Get;
	for(i=0; i<numEscuderias; i++){
		Get = storeEscuderia[i];
		cout << "Escuderia " << i+1 << endl;
		cout << "Nombre: " << Get.getName() << endl;
		Get.imprimirPilotos();
		Get.imprimirSponsors();                           
	}
}

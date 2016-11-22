#include<iostream>
#include <cstdlib> 
#include <vector>
#include <string.h>
#include "persona.h"
#include "carro.h"
#include "patrocinadores.h"
#include "escuderia.h"
#include "piloto.h"
#include "databaseask.h"
#include "database.h"
#include "databasemodifyper.h"

int DatabaseModifyPer::choosePersonas(){
	Database H; int i;
	H.getPersona();
	cout << "Ingrese el numero de la persona que desea modificar: " << endl;
	cin >> i;
	return i;
}
int DatabaseModifyPer::selectDataPersonas(){
	DatabaseAsk H; int i;
	cout << "Ingrese el numero segun lo que desee modificar" << endl;
	cout << 1 << " Nombre" << endl;
	cout << 2 << " Apellido" << endl;
	cout << 3 << " Edad" << endl;
	cout << 4 << " Pais" << endl;
	cout << 5 << " Sexo" << endl;
	i = H.askNumber();
	return i;
}
void DatabaseModifyPer::modificarNombre(Persona P, int i){
	DatabaseAsk H;
	cout << "Usted va a modificar el nombre." << endl;
	char* newName = H.askName();
	P.setName(newName);
	Database K;
	K.modificarPersonaVector(P, i);
}
void DatabaseModifyPer::modificarApellido(Persona P, int i){
	DatabaseAsk H;
	cout << "Usted va a modificar el apellido." << endl;
	char* newLName = H.askLName();
	P.setLastName(newLName);
	Database K;
	K.modificarPersonaVector(P, i);
}
void DatabaseModifyPer::modificarEdad(Persona P, int i){
	DatabaseAsk H;
	cout << "Usted va a modificar la edad." << endl;
	int newAge = H.askAge();
	P.setAge(newAge);
	Database K;
	K.modificarPersonaVector(P, i);
}
void DatabaseModifyPer::modificarPais(Persona P, int i){
	DatabaseAsk H;
	cout << "Usted va a modificar el pais." << endl;
	char* newCountry = H.askCountry();
	P.setCountry(newCountry);
	Database K;
	K.modificarPersonaVector(P, i);
}
void DatabaseModifyPer::modificarSexo(Persona P, int i){
	DatabaseAsk H;
	cout << "Usted va a modificar el sexo." << endl;
	char newSex = H.askSex();
	P.setSex(newSex);
	Database K;
	K.modificarPersonaVector(P, i);
}
void DatabaseModifyPer::selecmodificacion(int i, int k, Persona p){
	switch(i){
	case 1:
		modificarNombre(p, k);
		break;
	case 2:
		modificarApellido(p, k);
		break;
	case 3:
		modificarEdad(p, k);
		break;
	case 4:
		modificarPais(p, k);
		break;
	case 5:
		modificarSexo(p, k);
		break;
	}
}
void DatabaseModifyPer::modifyPersona(){
	int persona, selectData;
	Database K; Persona miPersona;
	persona = choosePersonas();
	selectData = selectDataPersonas();
	persona--;
	miPersona = K.getPersonaVector(persona);
	selecmodificacion(selectData, persona, miPersona);
}

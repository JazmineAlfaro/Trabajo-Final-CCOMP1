#include<iostream>
#include <cstdlib> 
#include <vector>
#include <string>
#include "persona.h"
#include "carro.h"
#include "patrocinadores.h"
#include "escuderia.h"
#include "piloto.h"
#include "databaseask.h"
#include "database.h"
#include "databasemodifypil.h"

int DatabaseModifyPil::choosePilotos(){
	Database H; int i;
	H.getPiloto();
	cout << "Ingrese el numero del piloto que desea modificar: " << endl;
	cin >> i;
	return i;
}
int DatabaseModifyPil::selectDataPilotos(){
	DatabaseAsk H; int i;
	cout << "Ingrese el numero segun lo que desee modificar" << endl;
	cout << 1 << " Nombre" << endl;
	cout << 2 << " Apellido" << endl;
	cout << 3 << " Edad" << endl;
	cout << 4 << " Pais" << endl;
	cout << 5 << " Sexo" << endl;
	cout << 6 << " Puntos" << endl;
	cout << 7 << " Puntos de la licencia" << endl;
	cout << 8 << " Paga" << endl;
	cout << 9 << " Numero" << endl;
	i = H.askNumber();
	return i;
}
void DatabaseModifyPil::modificarNombre(Piloto P, int i){
	DatabaseAsk H;
	cout << "Usted va a modificar el nombre." << endl;
	string newName = H.askName();
	P.setName(newName);
	Database K;
	K.modificarPilotoVector(P, i);
}
void DatabaseModifyPil::modificarApellido(Piloto P, int i){
	DatabaseAsk H;
	cout << "Usted va a modificar el apellido." << endl;
	string newLName = H.askLName();
	P.setLastName(newLName);
	Database K;
	K.modificarPilotoVector(P, i);
}
void DatabaseModifyPil::modificarEdad(Piloto P, int i){
	DatabaseAsk H;
	cout << "Usted va a modificar la edad." << endl;
	int newAge = H.askAge();
	P.setAge(newAge);
	Database K;
	K.modificarPilotoVector(P, i);
}
void DatabaseModifyPil::modificarPais(Piloto P, int i){
	DatabaseAsk H;
	cout << "Usted va a modificar el pais." << endl;
	string newCountry = H.askCountry();
	P.setCountry(newCountry);
	Database K;
	K.modificarPilotoVector(P, i);
}
void DatabaseModifyPil::modificarSexo(Piloto P, int i){
	DatabaseAsk H;
	cout << "Usted va a modificar el sexo." << endl;
	char newSex = H.askSex();
	P.setSex(newSex);
	Database K;
	K.modificarPilotoVector(P, i);
}
void DatabaseModifyPil::modificarPts(Piloto P, int i){
	DatabaseAsk H;
	cout << "Usted va a modificar los puntos." << endl;
	int newPoints = H.askPoints();
	P.addPoints(newPoints);
	Database K;
	K.modificarPilotoVector(P, i);
}
void DatabaseModifyPil::modificarPtsLicencia(Piloto P, int i){
	DatabaseAsk H;
	cout << "Usted va a modificar los puntos de la licencia." << endl;
	int newPoints = H.askPoints();
	P.substractLPoints(newPoints);
	Database K;
	K.modificarPilotoVector(P, i);
}
void DatabaseModifyPil::modificarPaga(Piloto P, int i){
	DatabaseAsk H;
	cout << "Usted va a modificar la paga." << endl;
	int newPay = H.askPay();
	P.modifyPay(newPay);
	Database K;
	K.modificarPilotoVector(P, i);
}
void DatabaseModifyPil::modificarNumero(Piloto P, int i){
	DatabaseAsk H;
	cout << "Usted va a modificar el numero." << endl;
	int newNumber = H.askNumber();
	P.setNumber(newNumber);
	Database K;
	K.modificarPilotoVector(P, i);
}
void DatabaseModifyPil::selecmodificacion(int i, int k, Piloto p){
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
	case 6:
		modificarPts(p, k);
		break;
	case 7:
		modificarPtsLicencia(p, k);
		break;
	case 8:
		modificarPaga(p, k);
		break;
	case 9:
		modificarNumero(p,k);
		break;
	}
}
void DatabaseModifyPil::modifyPiloto(){
	int piloto, selectData;
	Database K; Piloto miPiloto;
	if (K.getNumPilotos() == 0){
		cout << "No hay datos para modificar. " << endl;
	} else {
		piloto = choosePilotos();
		selectData = selectDataPilotos();
		piloto--;
		miPiloto = K.getPilotoVector(piloto);
		selecmodificacion(selectData, piloto, miPiloto);
	}
}


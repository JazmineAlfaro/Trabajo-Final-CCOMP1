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
#include "databasemodifycar.h"

int DatabaseModifyCar::chooseCars(){
	Database H; int i;
	H.getCarro();
	cout << "Ingrese el numero del carro que desea modificar: " << endl;
	cin >> i;
	return i;
}
int DatabaseModifyCar::selectDataCars(){
	DatabaseAsk H; int i;
	cout << "Ingrese el numero segun lo que desee modificar" << endl;
	cout << 1 << " Nombre" << endl;
	cout << 2 << " Motor" << endl;
	i = H.askNumber();
	return i;
}
void DatabaseModifyCar::modificarNombre(Car P, int i){
	DatabaseAsk H;
	cout << "Usted va a modificar el nombre." << endl;
	char* newName = H.askName();
	P.setName(newName);
	Database K;
	K.modificarCarVector(P, i);
}
void DatabaseModifyCar::modificarMotor(Car P, int i){
	DatabaseAsk H;
	cout << "Usted va a modificar el motor." << endl;
	char* newEngine = H.askEngine();
	P.setEngine(newEngine);
	Database K;
	K.modificarCarVector(P, i);
}
void DatabaseModifyCar::selecmodificacion(int i, int k, Car p){
	switch(i){
	case 1:
		modificarNombre(p, k);
		break;
	case 2:
		modificarMotor(p, k);
		break;
	}
}
void DatabaseModifyCar::modifyCar(){
	int carro, selectData;
	Database K; Car miCarro;
	if (K.getNumCarros() == 0){
		cout << "No hay coches que modificar." << endl;
	} else {
	carro = chooseCars();
	selectData = selectDataCars();
	carro--;
	miCarro = K.getCarVector(carro);
	selecmodificacion(selectData, carro, miCarro);
	}
}

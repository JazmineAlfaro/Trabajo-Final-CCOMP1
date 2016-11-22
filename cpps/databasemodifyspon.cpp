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
#include "databasemodifyspon.h"

int DatabaseModifySpon::chooseSpon(){
	Database H; int i;
	H.getSponsor();
	cout << "Ingrese el numero del patrocinador que desea modificar: " << endl;
	cin >> i;
	return i;
}
int DatabaseModifySpon::selectDataSpon(){
	DatabaseAsk H; int i;
	cout << "Ingrese el numero segun lo que desee modificar" << endl;
	cout << 1 << " Nombre" << endl;
	cout << 2 << " Ingresos" << endl;
	i = H.askNumber();
	return i;
}
void DatabaseModifySpon::modificarNombre(Patrocinadores P, int i){
	DatabaseAsk H;
	cout << "Usted va a modificar el nombre." << endl;
	char* newName = H.askName();
	P.setName(newName);
	Database K;
	K.modificarSponsorVector(P, i);
}
void DatabaseModifySpon::modificarIngresos(Patrocinadores P, int i){
	DatabaseAsk H;
	cout << "Usted va a modificar los ingresos." << endl;
	int newIngresos = H.askIngresos();
	P.setIngresos(newIngresos);
	Database K;
	K.modificarSponsorVector(P, i);
}
void DatabaseModifySpon::selecmodificacion(int i, int k, Patrocinadores p){
	switch(i){
	case 1:
		modificarNombre(p, k);
		break;
	case 2:
		modificarIngresos(p, k);
		break;
	}
}
void DatabaseModifySpon::modifySpon(){
	int sponsor, selectData;
	Database K; Patrocinadores miSponsor;
	sponsor = chooseSpon();
	selectData = selectDataSpon();
	sponsor--;
	miSponsor = K.getSponsorVector(sponsor);
	selecmodificacion(selectData, sponsor, miSponsor);
}

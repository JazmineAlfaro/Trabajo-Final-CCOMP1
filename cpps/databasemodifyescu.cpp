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
#include "databasemodifypil.h"
#include "databasemodifyspon.h"
#include "databasemodifyescu.h"
int DatabaseModifyEscu::chooseEscuderias(){
	Database H; int i;
	H.getEscuderia();
	cout << "Ingrese el numero de la escuderia que desea modificar: " << endl;
	cin >> i;
	return i;
}
int DatabaseModifyEscu::selectDataEscuderias(){
	DatabaseAsk H; int i;
	cout << "Ingrese el numero segun lo que desee modificar" << endl;
	cout << 1 << " Nombre" << endl;
	cout << 2 << " Pilotos" << endl;
	cout << 3 << " Patrocinadores" << endl;
	i = H.askNumber();
	return i;
}
void DatabaseModifyEscu::modificarNombre(Escuderia E, int i){
	DatabaseAsk H;
	cout << "Usted va a modificar el nombre." << endl;
	char* newName = H.askName();
	E.setName(newName);
	Database K;
	K.modificarEscuderiaVector(E, i);
}
void DatabaseModifyEscu::agregarPiloto(Escuderia E, int i){
	DatabaseAsk H;
	Piloto Driver;
	cout << "Usted va a agregar un piloto." << endl;
	int j;
	Database K;
	K.getPiloto();
	j = H.askNumber();
	Driver = K.getPilotoVector(j-1);
	E.setPilotos(Driver);
	K.modificarEscuderiaVector(E, i);
}
void DatabaseModifyEscu::agregarSponsor(Escuderia E, int i){
	DatabaseAsk H;
	Patrocinadores Sponsor;
	cout << "Usted va a agregar un auspiciador." << endl;
	int j;
	Database K;
	K.getSponsor();
	j = H.askNumber();
	Sponsor = K.getSponsorVector(j-1);
	E.setSponsor(Sponsor);
	K.modificarEscuderiaVector(E, i);
}
void DatabaseModifyEscu::selecmodificacion(int i, int k, Escuderia p){
	switch(i){
	case 1:
		modificarNombre(p, k);
		break;
	case 2:
		agregarPiloto(p, k);
		break;
	case 3:
		agregarSponsor(p, k);
		break;
	}
}
void DatabaseModifyEscu::modifyEscuderia(){
	int escuderia, selectData;
	Database K; Escuderia miTeam;
	if (K.getNumEscuderias() == 0){
		cout << "No hay datos para modificar." << endl;
	} else {
	escuderia = chooseEscuderias();
	selectData = selectDataEscuderias();
	escuderia--;
	miTeam = K.getEscuderiaVector(escuderia);
	selecmodificacion(selectData, escuderia, miTeam);
	}
}

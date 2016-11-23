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
#include "erase.h"
int Erase::choosePersona(){
	Database H; int i;
	H.getPersona();
	cout << "Ingrese el numero de la persona que desea eliminar: " << endl;
	cin >> i;
	return i;
}
int Erase::choosePiloto(){
	Database H; int i;
	H.getPiloto();
	cout << "Ingrese el numero del piloto que desea eliminar: " << endl;
	cin >> i;
	return i;
}
int Erase::chooseCoche(){
	Database H; int i;
	H.getCarro();
	cout << "Ingrese el numero del coche que desea eliminar: " << endl;
	cin >> i;
	return i;
}
int Erase::chooseEscuderia(){
	Database H; int i;
	H.getCarro();
	cout << "Ingrese el numero de la escuderia que desea eliminar: " << endl;
	cin >> i;
	return i;
}
int Erase::chooseSponsor(){
	Database H; int i;
	H.getCarro();
	cout << "Ingrese el numero del patrocinador que desea eliminar: " << endl;
	cin >> i;
	return i;
}
void Erase::erasePersona(){
	Database H;
	int i;
	i = choosePersona();
	H.deleteVectorPersona(i-1);
}
void Erase::erasePiloto(){
	Database H;
	int i;
	i = choosePiloto();
	H.deleteVectorPiloto(i-1);
}
void Erase::eraseCoche(){
	Database H;
	int i;
	i = choosePiloto();
	H.deleteVectorCar(i-1);
}
void Erase::eraseEscuderia(){
	;
}
void Erase::eraseSponsor(){
	Database H;
	int i ;
	i = chooseSponsor();
	H.deleteVectorSponsor();
}

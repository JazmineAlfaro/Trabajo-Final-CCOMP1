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
	H.getEscuderia();
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
bool Erase::borrarEscuderia(){
	char s;
	cout << "Desea borrar toda una escuderia? (s/n)" << endl;
	cin >> s;
	if (s == 's' || s == 'S'){
		return true;
	} else {
		return false;
	}
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
	Database H;
	Escuderia Temp;
	int i, j;
	i = chooseEscuderia();
	if (borrarEscuderia()){
		H.deleteVectorEscuderia(i-1);
	} else {
		cout << "Ingrese 1 (Pilotos) o 2 (Patrocinadores)" << endl;
		cin >> j;
		int k;
		Temp = H.getEscuderiaVector(i-1);
		if (j == 1){
			Temp.imprimirPilotos();
			cout << "Ingrese el numero del piloto que quiera eliminar." << endl;
			cin >> k;
			Temp.eliminarPilotos(k-1);
			H.modificarEscuderiaVector(Temp, i-1);
		} else {
			Temp.imprimirSponsors();
			cout << "Ingrese el numero del patrocionador que quiera eliminar." << endl;
			cin >> k;
			Temp.eliminarSponsors(k-1);
			H.modificarEscuderiaVector(Temp, i-1);
		}
	}
}
void Erase::eraseSponsor(){
	Database H;
	int i ;
	i = chooseSponsor();
	H.deleteVectorSponsor(i);
}


#include<iostream>
#include "persona.h"
#include "carro.h"
#include "patrocinadores.h"
#include "escuderia.h"
#include "piloto.h"
using namespace std;

int main () {
	Persona Max;
	Max.setName("Gonzalo Max");
	Max.setAge(34);
	Max.setCountry("Namibia");
	Max.setSex('T');
	Escuderia ToroAzul;
	Car Berde;
	Patrocinadores ZenSex;
	ToroAzul.setName("Toro Azul");
	Berde.setName("Berde");
	Berde.setEngine("Tico");
	ToroAzul.setCarro(Berde);
	ZenSex.setName("Condones ZenSex");
	ToroAzul.setSponsor(ZenSex);
	Patrocinadores Test;
	Test = ToroAzul.getSponsor(0);
	cout << "Item de la lista de Sponsors de la escuderia: " << Test.getName() << endl;
	Piloto Maxi;
	Maxi.setName("Max Verstappen mi dios");
	Maxi.setCountry("Holanda");
	Maxi.setNumber(33);
	Maxi.setAge(19);
	Maxi.setPay(500000);
	cout << "Nombre del piloto: " << Maxi.getname() << endl;
	cout << "Puntaje actual del piloto: " << Maxi.getPoints() << endl;
	cout << "Pais del piloto: " << Maxi.getCountry() << endl;
	ToroAzul.setPilotos(Maxi);
	Piloto B;
	B.setName("Berde");
	B.setAge(29);
	B.setSex('F');
	B.setNumber(69);
	ToroAzul.setPilotos(B);
	Piloto Testt;
	Testt = ToroAzul.getPiloto(1);
	cout << Testt.getname() << endl;
	return 0;
}


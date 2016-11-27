#include "databaseask.h"
#include <string.h>
#include <iostream>
using namespace std;
string DatabaseAsk::askName(){
	string name;
	cout<<"Ingrese un nombre: "<<endl;
	cin>>name;
	return name;
}

string DatabaseAsk::askLName(){
	string name;
	cout<<"Ingrese un apellido: "<<endl;
	cin>>name;
	return name;
}
int DatabaseAsk::askAge(){
	int age;
	cout<<"Ingrese su edad: "<<endl;
	cin>>age;
	return age;
}
char DatabaseAsk::askSex(){
	char sex;
	cout<<"Ingrese su sexo: "<<endl;
	cin>>sex;
	return sex;
}

string DatabaseAsk::askCountry(){
	string country;
	cout<<"Ingrese su pais: "<<endl;
	cin>>country;
	return country;
}

int DatabaseAsk::askPoints(){
	int points;
	cout<<"Ingrese sus puntos(si no hay ingrese 0): "<<endl;
	cin>>points;
	return points;
}

int DatabaseAsk::askPay(){
	int pay;
	cout<<"Ingrese su paga: "<<endl;
	cin>>pay;
	return pay;
}

int DatabaseAsk::askNumber(){
	int number;
	cout<<"Ingrese el numero: "<<endl;
	cin>>number;
	return number;
	
}

string DatabaseAsk::askEngine(){
	string engine;
	cout<<"Ingrese su motor: "<<endl;
	cin>>engine;
	return engine;
}

int DatabaseAsk::askIngresos(){
	int ingresos;
	cout<<"Ingrese sus ingresos: "<<endl;
	cin>>ingresos;
	return ingresos;
}

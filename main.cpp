#include<iostream>
#include <cstdlib> 
#include <vector>
#include <string.h>
#include "persona.h"
#include "carro.h"
#include "patrocinadores.h"
#include "escuderia.h"
#include "piloto.h"
using namespace std;
vector<Persona> storePersona; //guardar personas
vector<Car> storeCar; //guardar carros
vector<Patrocinadores> storeSponsor; //guardar Patrocinadores
vector<Escuderia> storeEscuderia; //guardar escuderia
vector<Piloto> storePiloto;	//guardar pilotos

int numPersonas = 0;
int numCarros = 0;
int numSponsors = 0;
int numEscuderias = 0;
int numPilotos = 0;
//PERSONA

char* askName(){
	char *myName;
	myName = new char[20];
	cout << "Ingrese un nombre: " << endl;
	cin >> myName;
	return myName;
}
char* askLName(){
	char *myLName;
	myLName = new char[20];
	cout << "Ingrese su apellido: " << endl;
	cin >> myLName;
	return myLName;
}
int askAge(){
	int myAge;
	cout << "Ingrese su edad: " << endl;
	cin >> myAge;
	return myAge;
}
char askSex(){
	char mySex;
	cout << "Ingrese su sexo (un caracter): " << endl;
	cin >> mySex;
	return mySex;
}
char* askCountry(){
	char *myCountry;
	myCountry = new char[30];
	cout << "Ingrese un pais: " << endl;
	cin >> myCountry;
	return myCountry;
}
//CHAU PERSONA
//Piloto
int askPoints(){
	int points;
	cout << "Ingrese los puntos: " << endl;
	cin >> points;
	return points;
}
int askPay(){
	int myPay;
	cout << "Ingrese la paga: " << endl;
	cin >> myPay;
	return myPay;
}
int askNumber(){
	int myNumber;
	cout << "Ingrese el numero: " << endl;
	cin >> myNumber;
	return myNumber;
}
//CHAU PILOTO
//Carro
char* askEngine(){
	char *myEngine;
	cout << "Ingrese la marca del motor: " << endl;
	myEngine = new char[15];
	cin>>myEngine;
	return myEngine;
}
//CHAU CARRO
//SPONSOR
int askIngresos(){
	int myIngresos;
	cout << "Los ingresos generados son: " << endl;
	cin >> myIngresos;
	return myIngresos;
}
//instrucciones originales
void instrucciones(){
	cout << "Oprima los numeros segun lo que desee hacer." << endl;
}
//primer menu
void menu(){
	instrucciones();
	cout << 1 << " para ingresar datos" << endl;
	cout << 2 << " para visualizar datos" << endl;
	cout << 3 << " para eliminar datos" << endl;
	cout << 4 << " para modificar datos" << endl;
	cout << 5 << " para salir de la base de datos" << endl;
}
//instrucciones al apretar 1 por primera vez
void instrucciones1(){
	cout << "Oprima los numeros segun lo que desee ingresar." << endl;
}
//menu al apretar 1 por primera vez
void menu1(){
	instrucciones1();
	cout << 1 << " para ingresar personas" << endl;
	cout << 2 << " para ingresar pilotos" << endl;
	cout << 3 << " para ingresar coches" << endl;
	cout << 4 << " para ingresar escuderias" << endl;
	cout << 5 << " para ingresar patrocinadores" << endl;
	cout << 6 << " para regresar al menu anterior" << endl;
	cout << 7 << " para salir de la base de datos" << endl;
}
//menu de ingresar personas
void instruccionesIngPer(){
	cout << "Recuerde que una persona debe tener las siguientes caracteristicas: " << endl;
	cout << "Nombre" << endl;
	cout << "Edad" << endl;
	cout << "Sexo" << endl;
	cout << "Nacionalidad" << endl;
}
void seleccionmenu1();
void instrucciones2(){
	cout << "Oprima los numeros segun lo que desee visualizar." << endl;
}
void menu2(){
	instrucciones2();
	cout << 1 << " para visualizar personas" << endl;
	cout << 2 << " para visualizar pilotos" << endl;
	cout << 3 << " para visualizar coches" << endl;
	cout << 4 << " para visualizar escuderias" << endl;
	cout << 5 << " para visualizar patrocinadores" << endl;
	cout << 6 << " para regresar al menu anterior" << endl;
	cout << 7 << " para salir de la base de datos" << endl;
}
void menuIngPer(){
	instruccionesIngPer();
	Persona newPersona;
	char* name;
	name = askName();
	char* lname = askLName();
	int age = askAge();
	char sex = askSex();
	char* country = askCountry();
	newPersona.setAge(age);
	newPersona.setCountry(country);
	newPersona.setName(name);
	newPersona.setSex(sex);
	newPersona.setLastName(lname);
	numPersonas++;
	storePersona.push_back(newPersona);
	seleccionmenu1();
}
//lo q pide un numero
void instruccionesIngPil(){
	instruccionesIngPer();
	cout << "Puntos (Poner 0 si no hay puntos)" << endl;
	cout << "Paga" << endl;
	cout << "Numero" << endl;
}
void menuIngPil(){
	instruccionesIngPil();
	Piloto newPiloto;
	char* name;
	name = askName();
	char* lname;
	lname = askLName();
	int age = askAge();
	char sex = askSex();
	char* country = askCountry();
	int points = askPoints();
	int pay = askPay();
	int number = askNumber();
	newPiloto.setAge(age);
	newPiloto.setCountry(country);
	newPiloto.setLastName(lname);
	newPiloto.setName(name);
	newPiloto.setNumber(number);
	newPiloto.setPay(pay);
	newPiloto.setSex(sex);
	numPilotos++;
	storePiloto.push_back(newPiloto);
	seleccionmenu1();
}
void instruccionesIngCoc(){
	cout << "Recuerde que un carro debe tener las siguientes características: " << endl;
	cout << "Nombre " << endl;
	cout << "Motor " << endl;
}
void menuIngCoc(){
	instruccionesIngCoc();
	Car newCar;
	char* myName = askName();
	char* myEngine = askEngine();
	newCar.setEngine(myEngine);
	newCar.setName(myName);
	numCarros++;
	storeCar.push_back(newCar);
	seleccionmenu1();
}
/*ingresar escuderias


*/

void instruccionesIngSpon(){
	cout << "Recuerde que un patrocinador debe tener las siguientes caracteristicas: " << endl;
	cout << "Nombre " << endl;
	cout << "Ingresos " << endl;
}
void menuIngSpon(){
	instruccionesIngSpon();
	Patrocinadores newSponsor;
	char* myName = askName();
	int myIngresos = askIngresos();
	newSponsor.setIngresos(myIngresos);
	newSponsor.setName(myName);
	numSponsors++;
	storeSponsor.push_back(newSponsor);
	seleccionmenu1();
	
}
void seleccionmenu2();
void getPersonas(){
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
	seleccionmenu2();
}
void getPilotos(){
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
	seleccionmenu2();
}
void getCarros(){
	int i;
	Car Get;
	for (i = 0; i<numCarros; i++){
		Get = storeCar[i];
		cout << "Carro " << i+1 << endl;
		cout << "Nombre: " << Get.getName() << endl;
		cout << "Motor: " << Get.getEngine() << endl;
	}
	seleccionmenu2();
}
void getEscuderias(){
	int i;
	Escuderia Get;
	for(i=0; i<numEscuderias; i++){
		Get = storeEscuderia[i];
		cout << "Escuderia " << i+1 << endl;
		cout << "Nombre: " << Get.getName() << endl;
		Get.imprimirPilotos();
		Get.imprimirSponsors();
	}
	seleccionmenu2();
}
void getPatrocinadores(){
	int i;
	Patrocinadores Get;
	for(i = 0; i<numSponsors; i++){
		Get = storeSponsor[i];
		cout << "Patrocinador " << i+1 << endl;
		cout << "Nombre: " << Get.getName() << endl;
		cout << "Ingresos: " << Get.getIngresos() << endl;
	}
	seleccionmenu2();
}
int seleccion(){
	int opc;
	cout << "Ingrese el numero: " << endl;
	cin >> opc;
	return opc;
}
void seleccionmenu1();
//seleccionando en el primer menu
void seleccionmenu2(); //seleccionando en el segundo menu -> visualizar datos 
void seleccionar(int opc){
	switch(opc){
	case 1:
		seleccionmenu1();
		break;
	case 2:
		seleccionmenu2();
		break;
	case 3:
		;
	break;
	case 4:
		;
	break;
	case 5:
		exit(2604);
	}
}
void praseleccion(); //declarando funcion praseleccion 
//menu 1: ingresando personas
void selecMenuIngPers();
void selecMenuIngPil(); //Ingresar Pilotos
void selecMenuIngCoc(); //Ingresar coches
void selecMenuIngSpon(); //Ingresar sponsors
void selecmenu1(int opc){ //menu 1 = modificar datos
	switch(opc){
	case 1:
		selecMenuIngPers();
		break;
	case 2:
		selecMenuIngPil();
		break;
	case 3:
		selecMenuIngCoc();
		break;
	case 4:
		;
	break;
	case 5:
		selecMenuIngSpon();
		break;
	case 6:
		praseleccion();
		break;
	case 7:
		exit(35);
	}
}
void prasaleccion();
void selecmenu2(int opc){ //menu 2 = visualizar datos
	switch(opc){
	case 1:
		getPersonas();
		break;
	case 2:
		getPilotos();
		break;
	case 3:
		getCarros();
		break;
	case 4:
		getEscuderias();
	break;
	case 5:
		getPatrocinadores();
	break;
	case 6:
		praseleccion();
		break;
	case 7:
		exit(69);
	}
}
//seleccion menu ingreso de personas -> 6 opciones

void praseleccion(){
	menu();
	int i = seleccion();
	seleccionar(i);
}
//para seleccionar menu->1
void seleccionmenu1(){
	menu1();
	int i = seleccion();
	selecmenu1(i);
	
}

//para seleccionar menu->1->1
void selecMenuIngPers(){
	menuIngPer();
}
void selecMenuIngPil(){
	menuIngPil();
}
void selecMenuIngCoc(){
	menuIngCoc();
}
void selecMenuIngSpon(){
	menuIngSpon();
}
void seleccionmenu2(){
	menu2();
	int i = seleccion();
	selecmenu2(i);
}
int main () {
	praseleccion();
	return 0;
}

//hacer lo de pilotos

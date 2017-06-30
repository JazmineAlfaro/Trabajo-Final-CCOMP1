#include "Laptop.h"

Laptop::Laptop()
{
	//Producto();
	this->procesador=" ";
	this->marca =" ";
}
Laptop::Laptop(const Laptop &L){
	codigo = L.codigo;
	p_venta = L.p_venta;
	stock = L.stock;
	procesador = L.procesador;
	marca = L.marca;
}
Laptop::Laptop(string codigo,string p_venta,string stock,string procesador,string marca){
	codigo = codigo;
	p_venta = p_venta;
	stock = stock;
	procesador = procesador;
	marca = marca;
}
Laptop::Laptop(string datos){
	this->codigo=getPalabra(datos);
	this->p_venta=getPalabra(datos);
	this->stock=getPalabra(datos);
	this->procesador=getPalabra(datos);
	this->marca=getPalabra(datos);
}

string Laptop::getPalabra(string &palabra){
	
	int pos=palabra.find(",");
	string tpalabra=palabra.substr(0,pos);
	palabra=palabra.substr(pos+1,palabra.length());
	return tpalabra;
}


string Laptop::getProcs(){return procesador;}
string Laptop::getMarca(){return marca;}

void Laptop::setProcs(string procesador){this->procesador=procesador;}
void Laptop::setMarca(string marca){this->marca=marca;}

void Laptop::print(){
	cout<<codigo<<" "<<p_venta<<" "<<stock<<" "<<procesador<<" "<<marca<<endl;
}

void Laptop::ingresar(){
	Laptop l;
	string preguntas[5]= {"Ingrese el codigo: ", "Ingrese el precio: ", "Ingrese el stock: ", "Ingrese el procesador", "Ingrese la marca: "};
	string respuestas[5];
	for(int i=0;i<5;i++){
		cout<<preguntas[i];
		cin>>respuestas[i]; 
		cout<<endl;
	}
	l.setCodigo(respuestas[0]);
	l.setPventa(respuestas[1]);
	l.setStock(respuestas[2]);
	l.setProcs(respuestas[3]);
	l.setMarca(respuestas[4]);
	l.subir();

}

void Laptop::subir(){
	string datos;
	datos = codigo +","+ p_venta + "," + stock + "," + procesador + "," + marca;
	archivo.open ("productos.txt", fstream::out | fstream::app);
	archivo<< datos<<endl;
	archivo.close();
}

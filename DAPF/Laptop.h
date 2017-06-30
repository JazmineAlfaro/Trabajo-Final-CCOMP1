#ifndef LAPTOP_H
#define LAPTOP_H
#include <vector>
#include"Producto.h"


class Laptop:public Producto
{
public:
	string procesador;
	string marca;

public:
	Laptop();
	Laptop(string,string,string,string,string);
	Laptop(string);
	Laptop(const Laptop &L);
	string getPalabra(string &palabra);
	string getProcs();
	string getMarca();
	void ingresar();
	void setProcs(string procesador);
	void setMarca(string marca);
	void print();
	void subir();
	/*
	friend ostream &operator<< (ostream &o,Laptop l){
		o<<"CODIGO:"<<l.codigo<<endl;
		o<<"PRECIO:"<<l.p_venta<<endl;
		o<<"STOCK:"<<l.stock<<endl;
		o<<"PROCESADOR:"<<l.procesador<<endl;
		o<<"MARCA:"<<l.marca;
		return o;
	}*/
};

#endif // LAPTOP_H

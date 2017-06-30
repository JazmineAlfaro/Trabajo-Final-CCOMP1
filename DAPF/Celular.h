#ifndef CELULAR_H
#define CELULAR_H
#include "Producto.h"


class Celular:public Producto
{
protected:
	string modelo;
	string camara;
	string pulgadas;
	fstream archivo;
public:
	Celular();
	// Celular(string codigo,string p_venta,string stock,string modelo,string camara,string pulgadas);
	//Celular(const Celular &C);
	Celular(string datos);
	
	string getPalabra(string &palabra);

	string getModelo();
	string getCamara();
	string getPulgadas();
	
	
	void setModelo(string modelo);
	void setCamara(string camara);
	void setPulgadas(string pulgadas);
	void print();
	void subir();
	void ingresar();
	/*
	friend ostream &operator << (ostream &o,Celular c){
		o<<"CODIGO:"<<c.codigo<<endl;
		o<<"P.VENTA:"<<c.p_venta<<endl;
		o<<"STOCK:"<<c.stock<<endl;
		o<<"MODELO:"<<c.modelo<<endl;
		o<<"CAMARA:"<<c.camara<<endl;
		o<<"PULGADAS:"<<c.pulgadas<<endl;
		return o;*/
	
	
};
#endif // CELULAR_H

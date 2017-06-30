#ifndef DB_H
#define DB_H
#include "Producto.h"
#include "Laptop.h"
#include "Celular.h"
#include <vector>
#include <string>
#include<fstream>
#include<stdlib.h>

class DB{
private:
	vector<Producto *> productitos;
	vector<Celular *> celulares;
	vector<Laptop *> laptops;
	string texto;
	
	fstream archivo;
	DB();
	static DB *p_instancia; 
	Laptop l;
	Celular c;
public:
	static DB* instancia();
	void Recuperar(string nArchivo="productos.txt");
	
	void ver_Productos();
	void ver_Laptops();
	void ver_Celulares();
	
	
	void cargar();
	void subirDB();
	void Actualizar();
	void separar();
	void menu_principal();
	void seleccion1();
	void menu_insertar();
	void menu_eliminar();
	void menu_visualizar();
	void menu_modificar();
	void insertar();
	void visualizar();
	void rewrite();
	void Eliminar_c();
	void Eliminar_l();
	void Eliminar_p();
	void eliminar();
	void modificar();
	void elegirModificar();
	void modificarCelular();
	void modificarLaptop();
};

#endif // DB_H


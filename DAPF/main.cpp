#include <iostream>
#include "Producto.h"
#include "DB.h"
#include "Laptop.h"
#include "Celular.h"
#include <vector>
#include <stdlib.h>
#include <string>
using namespace std;

int main()
{
	DB* c = DB::instancia();
	c->menu_principal();
	c->seleccion1();
}

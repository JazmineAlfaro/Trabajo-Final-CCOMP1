#include "Menu.h"

void Menu::menu_principal(){
	cout<<" Bienvenido a su base de datos"<<endl;
	cout<< " Desea : "<<endl;
	cout<<endl;
	string opciones[4] = {" 1. Insertar producto", " 2. Eliminar producto", " 3. Visualizar producto", " 4. Salir de la base de datos"};
	for(int i=0;i<4;i++){
		cout<<opciones[i]<<endl;
		cout<<endl;
	}
}

void Menu::menu_insertar(){
	string opciones[3] = {" 1. Insertar laptop", " 2. Insertar celular", " 3. Regresar al menu principal"};
	for(int i=0;i<3;i++){
		cout<<opciones[i]<<endl;
		cout<<endl;
	}
}

void Menu::menu_eliminar(){
	string opciones[3] = {" 1. Eliminar laptop", " 2. Eliminar celular", " 3. Regresar al menu principal"};
	for(int i=0;i<3;i++){
		cout<<opciones[i]<<endl;
		cout<<endl;
	}
}

void Menu::menu_visualizar(){
	string opciones[4] = {" 1. Visualizar laptop", " 2. Visualizar celular", " 3. Visualizar todos los productos"," 4. Regresar al menu principal"};
	for(int i=0;i<4;i++){
		cout<<opciones[i]<<endl;
		cout<<endl;
	}
}

void Menu::seleccion1(){
	int x;
	cout<< "Ingrese un numero: "; cin>> x;
	cout<<endl;
	switch(x){
	case 1:
		menu_insertar();
		break;
	case 2:
		menu_eliminar();
		break;
	case 3:
		menu_visualizar();
		break;
	case 4:
		exit(1);
		break;
	default:
		cout<<"El numero que ingreso es invalido intente de nuevo"<<endl;
	}
}

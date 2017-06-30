#include "DB.h"

DB* DB::p_instancia = NULL;

DB::DB(){
	cargar();
}

DB* DB::instancia(){
	if(!p_instancia)
		p_instancia = new DB();
	return p_instancia;
}

void DB::cargar(){
	Producto *temp;
	Laptop *l;
	Celular *c;
	string STRING;
	archivo.open("productos.txt");
	while(!archivo.eof()){
		getline(archivo,STRING);
		
		if(STRING[0]=='L'){
			temp= new Laptop(STRING);
			l = new Laptop(STRING);
			laptops.push_back(l);
			productitos.push_back(temp);
		}
		else{
			temp = new Celular(STRING);
			c = new Celular(STRING);
			celulares.push_back(c);
			productitos.push_back(temp);
		}
	}
	archivo.close();
}

void DB::ver_Productos(){
	int t=productitos.size();
	if(t==0)
		cout<<" Lista de productos vacia"<<endl;
	else{
		cout<<endl;
		for(int i=0;i<t-1;i++){
			Producto* temp = productitos[i];
			cout<<i+1<<" ";
			temp->print();}
	}
}

void DB::ver_Laptops(){
	int l=laptops.size();
	if(l==0)
		cout<<"Lista de laptops vacia"<<endl;
	else{
		cout<<endl;
		int j =1;
		for(int i=0;i<l;i++){
			Laptop* temp = laptops[i];
			cout<<j++<<" ";
			temp->print();}
	}
	cout<<endl;
}


void DB::ver_Celulares(){
	int c=celulares.size();
	if(c==0)
		cout<<"Lista de celulares vacia"<<endl;
	else{
		cout<<endl;
		for(int i=0;i<c-1;i++){
			Celular* temp = celulares[i];
			cout<<i+1<<" ";
			temp->print();}
	}
	cout<<endl;
}

void DB::subirDB(){
	int t=productitos.size()-1;
	for(int i=0;i<t;i++){
		Producto* temp = productitos[i];
		temp->subir();
	}
}

void DB::rewrite(){
	ofstream ficheroSalida;
	ficheroSalida.open ("productos.txt");
	subirDB();
	ficheroSalida.close();
}

void DB::Eliminar_p(){
	ver_Productos();
	bool encontrar=true;
	while(encontrar == true){
	int b;
	cout<<"Que producto desea eliminar?";cin>>b;
	for(int i=0;i<productitos.size();i++){
		if(b-1==i)
		productitos.erase(productitos.begin()+b-1);
		encontrar = false;
	}
	}
	rewrite();
}

void DB::Eliminar_l(){
	ver_Laptops();
	bool encontrar=true;
	while(encontrar == true){
		int b;
		cout<<"Que producto desea eliminar?";cin>>b;
		for(int i=0;i<laptops.size();i++){
			if(b-1==i)
				laptops.erase(laptops.begin()+b-1);
			encontrar = false;
		}
	}
	rewrite();
}

void DB::Eliminar_c(){
	ver_Celulares();
	bool encontrar=true;
	while(encontrar == true){
		int b;
		cout<<"Que producto desea eliminar?";cin>>b;
		for(int i=0;i<celulares.size();i++){
			if(b-1==i)
				celulares.erase(celulares.begin()+b-1);
			encontrar = false;
		}
	}
	rewrite();
}

void DB::menu_principal(){
	cout<<endl;
	cout<<" Bienvenido a su base de datos"<<endl;
	cout<< " Desea : "<<endl;
	cout<<endl;
	
	string opciones[5] = {" 1. Ingresar producto", " 2. Eliminar producto", " 3. Visualizar producto", " 4. Modificar producto"," 5. Salir de la base de datos"};
	for(int i=0;i<5;i++){
		cout<<opciones[i]<<endl;
		cout<<endl;
	}
}

void DB::menu_insertar(){
	string opciones[3] = {" 1. Ingresar laptop", " 2. Ingresar celular", " 3. Regresar al menu principal"};
	for(int i=0;i<3;i++){
		cout<<opciones[i]<<endl;
		cout<<endl;
	}
}

void DB::menu_eliminar(){
	string opciones[3] = {" 1. Eliminar laptop", " 2. Eliminar celular", " 3. Regresar al menu principal"};
	for(int i=0;i<3;i++){
		cout<<opciones[i]<<endl;
		cout<<endl;
	}
}

void DB::menu_visualizar(){
	string opciones[4] = {" 1. Visualizar laptop", " 2. Visualizar celular", " 3. Visualizar todos los productos"," 4. Regresar al menu principal"};
	for(int i=0;i<4;i++){
		cout<<opciones[i]<<endl;
		cout<<endl;
	}
}

void DB::menu_modificar(){
	string opciones[3] = {" 1. Modificar laptop", " 2. Modificar celular", " 3.Regresar al menu principal"};
	for(int i=0;i<3;i++){
		cout<<opciones[i]<<endl;
		cout<<endl;
	}
}

void DB::seleccion1(){
	int x;
	cout<< "Ingrese un numero: "; cin>> x;
	cout<<endl;
	switch(x){
	case 1:
		menu_insertar();
		insertar();
		break;
	case 2:
		menu_eliminar();
		eliminar();
		break;
	case 3:
		menu_visualizar();
		visualizar();
		break;
	case 4:
		menu_modificar();
		elegirModificar();
		
		break;
	case 5:
		exit(1);
		break;
	default:
		cout<<"El numero que ingreso es invalido intente de nuevo"<<endl;
	}
}

void DB::elegirModificar(){
	int x;
	cout<<"Ingrese el numero:"<<endl;
	cin>> x;
	switch(x){
	case 1:
		modificarLaptop();
		break;
	case 2: 
		modificarCelular();
		break;
	case 3:
		menu_principal();
		seleccion1();
		break;
	case 4:
		exit(1);
	}
}
void DB::insertar(){
	int x;
	cout<< "Ingrese un numero: "; cin>> x;
	cout<<endl;
	switch(x){
	case 1:
		l.ingresar();
		menu_principal();
		seleccion1();
		break;
	case 2:
		c.ingresar();
		menu_principal();
		seleccion1();
		break;
	case 3:
		menu_principal();
		seleccion1();
		break;
	default:
		cout<<"El numero que ingreso es invalido intente de nuevo"<<endl;
	}
}

void DB::visualizar(){
	int x;
	cout<< "Ingrese un numero: "; cin>> x;
	cout<<endl;
	switch(x){
	case 1:
		ver_Laptops();
		menu_principal();
		seleccion1();
		break;
	case 2:
		ver_Celulares();
		menu_principal();
		seleccion1();
		break;
	case 3:
		ver_Productos();
		menu_principal();
		seleccion1();
		break;
	case 4:
		menu_principal();
		seleccion1();
		break;
	default:
		cout<<"El numero que ingreso es invalido intente de nuevo"<<endl;
	}
}

void DB::eliminar(){
	int x;
	cout<< "Ingrese un numero: "; cin>> x;
	cout<<endl;
	switch(x){
	case 1:
		Eliminar_l();
		menu_principal();
		seleccion1();
		break;
	case 2:
		Eliminar_c();
		menu_principal();
		seleccion1();
		break;
	case 3:
		menu_principal();
		seleccion1();
		break;

	default:
		cout<<"El numero que ingreso es invalido intente de nuevo"<<endl;
	}
	
}
void DB::modificarCelular(){
	ver_Celulares();
	int b;
	cout<<"Que producto desea modificar?";cin>>b;
	Celular *nuevo = celulares[b-1];
	string carac[5] = {" 1. Codigo"," 2. Precio"," 3. Stock"," 4. Modelo"," 5. Camara"};
	for(int i=0;i<5;i++){
		int j=1;
		cout<<" "<<carac[i]<<endl;}
	int opc;
	string algo;
	
	cin>>opc;
	cin>>algo;
	switch(opc){
	case 1:
		nuevo->setCodigo(algo);
		break;
	case 2:
		nuevo->setPventa(algo);
		break;
	case 3:
		nuevo->setStock(algo);
		break;
	case 4:
		nuevo->setModelo(algo);
		break;
	case 5:
		nuevo->setCamara(algo);
		break;
	}
	rewrite();
}


void DB::modificarLaptop(){
	ver_Laptops();
	int b;
	cout<<"Que producto desea modificar?";cin>>b;
	Laptop *nuevo = laptops[b-1];

	string carac[5] = {" 1. Codigo"," 2. Precio"," 3. Stock"," 4. Procesador"," 5. Marca"};
	for(int i=0;i<5;i++){
		cout<<carac[i]<<endl;}
	int opc;
	
	string algo;
	cout<< "Ingrese el numero: "<<endl;
	cin>>opc;
	cout<< "Ingrese: ";
	cin>>algo;
	
	
	switch(opc){
	case 1:
		nuevo->setCodigo(algo);
		break;
	case 2:
		nuevo->setPventa(algo);
		break;
	case 3:
		nuevo->setStock(algo);
		break;
	case 4:
		nuevo->setProcs(algo);
		break;
	case 5:
		nuevo->setMarca(algo);
		break;
	}

	rewrite();
}
	

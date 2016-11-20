#include <iostream>
using namespace std;

class Database{
private:
	static int numPersonas;
	static int numCarros;
	static int numSponsors;
	static int numEscuderias;
	static int numPilotos;
	vector<Persona> storePersona; //guardar personas
	vector<Car> storeCar; //guardar carros
	vector<Patrocinadores> storeSponsor; //guardar Patrocinadores
	vector<Escuderia> storeEscuderia; //guardar escuderia
	vector<Piloto> storePiloto;	//guardar pilotos
	DatabaseAsk myDB;
public:
	Database();
	void instEscudCar();
	void instEscudPil();
	void instEscudSpon();
	bool ingresarMas();
	int getNumPersonas();
	void menuIngrPer();
	void getPersona();
	int getNumPilotos();
	void menuIngrPil();
	void getPiloto();
	int getNumCarros();
	void menuIngrCoc();
	void getCarro();
	int getNumSpon();
	void menuIngrSpon();
	void getSponsor();
	int getNumEscuderias();
	void menuIngrEsc();
	void getEscuderia();
};

class Persona;
class Piloto;
class Patrocinadores;
class Car;
class Escuderia{
private:
	Piloto *Pilotos; //puntero a array de pilotos
	int numPilotos;
	Patrocinadores *Sponsors; //puntero a array de Sponsors
	int numSponsors;
	char* name;
	//Persona jefeDeIngenieros;
	//Persona *Mecanicos; //puntero a array de Mecanicos
	//int numMecanicos;
	Car carro;
public:
	Escuderia();
	//Escuderia(Persona Drivers[], int numP, Patrocinadores Pat[], int numS, char* neim, Persona Jefe, Persona Mecs[], int numM, Car car);
	void setPilotos(Piloto Driver);
	void setSponsor(Patrocinadores Sponsor);
	void setName(char* neim);
	void setJefe(Persona Jefe);
	void setMecanicos(Persona Mecanico);
	void setCarro(Car car);
	char* getName();
	Persona getJefito();
	Car getCarro();
	Patrocinadores getSponsor(int pos);
	Piloto getPiloto(int pos);
	
};

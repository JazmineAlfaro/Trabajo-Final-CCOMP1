class Escuderia{
private:
	Persona *Pilotos; //puntero a array de pilotos
	int numPilotos;
	Patrocinador *Sponsors; //puntero a array de Sponsors
	int numSponsors;
	char* name;
	Persona JefeDeIngenieros;
	Persona *Mecanicos; //puntero a array de Mecanicos
	int numMecanicos;
	Car carro;
	//agregar mas miembros privados
public:
	Escuderia();
	Escuderia(Persona Drivers[], int numP, Patrocinadores Pat[], int numS, char* neim, Persona Jefe, Persona Mecs[], int numM, Car car);
	void setPilotos(Persona Driver);
	void setSponsor(Patrocinador Sponsor);
	void setName(char* neim);
	void setJefe(Persona Jefe);
	void setMecanicos(Persona Mecanico);
	void setCarro(Car car);
	
};

#include<iostream>
#include <string>
class Persona;
class Piloto;
class Patrocinadores;
class Car;
class Escuderia{
private:
	Piloto *pilotos;
	int numPilotoss;
	Patrocinadores *sponsors;
	int numSponsorss;
	std::string name;
	Car carro;
public:
	Escuderia();
	void setPilotos(Piloto Driver);
	void eliminarPilotos(int i);
	void setSponsor(Patrocinadores Sponsor);
	void eliminarSponsors(int i);
	void setName(std::string neim);
	void setCarro(Car car);
	std::string getName();
	Car getCarro();
	Patrocinadores getSponsor(int pos);
	Piloto getPiloto(int pos);
	void imprimirSponsors();
	void imprimirPilotos();
};

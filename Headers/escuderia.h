#include <string>

class Persona;
class Piloto;
class Patrocinadores;
class Car;
class Escuderia{
private:
	Piloto *Pilotos; //puntero a array de pilotos
	int numPilotoss;
	Patrocinadores *Sponsors; //puntero a array de Sponsors
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
	void setJefe(Persona Jefe);
	void setMecanicos(Persona Mecanico);
	void setCarro(Car car);
	std::string getName();
	Persona getJefito();
	Car getCarro();
	Patrocinadores getSponsor(int pos);
	Piloto getPiloto(int pos);
	void imprimirSponsors();
	void imprimirPilotos();
	
};

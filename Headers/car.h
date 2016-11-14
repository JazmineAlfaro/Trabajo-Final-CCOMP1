class Escuderia;
class Car{ //clase hija de piloto
private:
	char* name;
	char* engine;
	Escuderia Team;
	int number;
public:
	Car();
	void setName(char* neim);
	void setEngine(char* eng);
	void setEscuderia(Escuderia tim);
	void setNumber(int num);
	char* getName();
	char* getEngine();
	Escuderia getEscuderia();
	int getNumber();
	
};

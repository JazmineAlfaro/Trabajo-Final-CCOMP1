#include <string>
class DatabaseAsk{
public:
	std::string askName();
	std::string askLName();
	int askAge();
	char askSex();
	std::string askCountry();
	//CHAU PERSONA
	//Piloto
	int askPoints();
	int askPay();
	int askNumber();
	//CHAU PILOTO
	//Carro
	std::string askEngine();
	//CHAU CARRO
	//SPONSOR
	int askIngresos();
};

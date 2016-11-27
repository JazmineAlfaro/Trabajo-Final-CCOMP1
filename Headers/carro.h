#include <string>

class Car{
private:
	std::string name;
	std::string engine;
public:
	Car();
	void setName(std::string neim);
	void setEngine(std::string eng);
	std::string getName();
	std::string getEngine();
	void imprimirCarro();
	
};

#include <string>
class Persona{
	
protected:
	std::string name;
	std::string lastname;
	int age;
	std::string country; //nationality
	char sex;
public:
	Persona();
	int getAge();
	std::string getname();
	std::string getCountry();
	char getSex();
	void setAge(int eish);
	void setName(std::string neim);
	void setCountry(std::string contri);
	void setSex(char sexo);
	void setLastName(std::string apellido);
	void printSex();
	std::string getLastName();
	
};

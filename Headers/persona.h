class Persona{
//protected:
protected:
	char* name;
	//string name;
	int age;
	char* country; //nationality
	//string country;
	char sex;
public:
	Persona();
	//Persona(char* neim, int eish, char* contri, char sexo);
	//~Persona();
	int getAge();
	char* getname();
	//string getname();
	char* getCountry();
	//string getCountry();
	char getSex();
	void setAge(int eish);
	void setName(char* neim);
	//void setName(string neim);
	void setCountry(char* contri);
	//void setCountry(string contri);
	void setSex(char sexo);
	void printSex();
	
};

class Persona{

protected:
	char* name;
	char* lastname;
	int age;
	char* country; //nationality
	char sex;
public:
	Persona();
	int getAge();
	char* getname();
	char* getCountry();
	char getSex();
	void setAge(int eish);
	void setName(char* neim);
	void setCountry(char* contri);
	void setSex(char sexo);
	void setLastName(char* apellido);
	void printSex();
	char* getLastName();
	
};


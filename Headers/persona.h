class Persona{
private:
	char* name;
	int age;
	int id;
	char* country; //nationality
	char sex;
public:
	Persona();
	Persona(char* neim, int eish, int aidi, char* contri, char sexo);
	//~Persona();
	int getAge();
	int getID();
	char* getname();
	char* getCountry();
	char getSex();
	void setAge(int eish);
	void setID(int aidi);
	void setName(char* neim);
	void setCountry(char* contri);
	void setSex(char sexo);
	
};

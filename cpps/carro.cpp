class Car{
private:
	char* name;
	char* engine;
public:
	Car();
	void setName(char* neim);
	void setEngine(char* eng);
	char* getName();
	char* getEngine();
	void imprimirCarro();
	//friend std::ostream& operator<<(std::ostream& output, const Car &C);
	
};

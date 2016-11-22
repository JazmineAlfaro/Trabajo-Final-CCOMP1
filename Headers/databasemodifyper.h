class Persona;
class DatabaseModifyPer{
public:
	int choosePersonas();
	int selectDataPersonas();
	void modificarNombre(Persona, int i);
	void modificarApellido(Persona, int i);
	void modificarEdad(Persona, int i);
	void modificarPais(Persona, int i);
	void modificarSexo(Persona, int i);
	void selecmodificacion(int i, int k, Persona p);
	void modifyPersona();
	
};

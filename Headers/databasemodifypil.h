class Piloto;
class DatabaseModifyPil{
public:
	int choosePilotos();
	int selectDataPilotos();
	void modificarNombre(Piloto, int i);
	void modificarApellido(Piloto, int i);
	void modificarEdad(Piloto, int i);
	void modificarPais(Piloto, int i);
	void modificarSexo(Piloto, int i);
	void modificarPts(Piloto, int i);
	void modificarPtsLicencia(Piloto, int i);
	void modificarPaga(Piloto, int i);
	void modificarNumero(Piloto, int i);
	void selecmodificacion(int i, int k, Piloto p);
	void modifyPiloto();
};

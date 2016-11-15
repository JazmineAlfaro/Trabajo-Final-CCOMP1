class Piloto: public Persona{
private:
	int points; //champ points
	int licensep; //super license points = 10 per season
	int pay;
	int number;  //car number
public:
	Piloto();
	void addPoints(int p);
	void substractLPoints(int p);
	void setPay(int p);
	void modifyPay(int p);
	void setNumber(int n);
	int getPoints();
	int getLPoints();
	int getPay();
	int getNumber();
};

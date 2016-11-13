#include<iostream>
#include "persona.h"
using namespace std;

int main () {
	Persona Jaz;
	Jaz.setAge(17);
	Jaz.setName("Yasmeen");
	Jaz.setID(72193232);
	Jaz.setCountry("Peru");
	Jaz.setSex('F');
	cout << Jaz.getAge() << endl;
	cout << Jaz.getSex() << endl;
	return 0;
}

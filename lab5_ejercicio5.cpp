#include <iostream>
using namespace std;

int main()
{
	int edad;
	
	cout << "Ingrese Edad: ";
	cin >> edad;
	
	if (edad < 0)
	{
		cout << "Edad no Valida (no puede ser menor a 0)";
		return 1;
	}
	
	if (edad >= 18 && edad <= 25)
		cout << "la edad ingresada se encuentra dentro del rango [18-25]" << endl;
	else
		cout << "la edad ingresada NO se encuentra dentro del rango [18-25]" << endl;
	
	return 0;
}

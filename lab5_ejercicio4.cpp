#include <iostream>
using namespace std;

int main()
{
	string nombre;
	float num1, num2;
	
	cout << "Ingrese su Nombre: ";
	cin >> nombre;
	
	cout << "Ingrese un Numero: ";
	cin >> num1;
	
	cout << "Ingrese otro Numero: ";
	cin >> num2;
	
	float suma = num1+num2, resta = num1-num2, multi = num1*num2, div = num1/num2, prom = (suma+resta+multi+div)/4;
	
	cout << "Hola " << nombre << "!\n";
	cout << num1 << " + " << num2 << " = " << suma << endl;
	cout << num1 << " - " << num2 << " = " << resta << endl;
	cout << num1 << " * " << num2 << " = " << multi << endl;
	cout << num1 << " / " << num2 << " = " << div << endl;
	cout << "Promedio: " << prom;
	
	return 0;
}

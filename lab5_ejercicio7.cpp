#include <iostream>
using namespace std;

int suma(int a, int b);

int main()
{
	int num1, num2, sum;
	do{
		cout << "Ingrese un numero mayor a 0: ";
		cin >> num1;
		if (num1 < 0)
			cout << "INGRESE NUMERO MAYOR A 0" << endl;
	} while (num1 < 0);
	
	do{
		cout << "Ingrese otro numero mayor a 0: ";
		cin >> num2;
		if (num2 < 0)
			cout << "INGRESE NUMERO MAYOR A 0" << endl;
	} while (num2 < 0);
	
	
	sum = suma(num1, num2);
	
	cout << num1 << " + " << num2 << " = " << sum;
	
	return 0;
}

int suma(int a, int b)
{
	return a + b;
}

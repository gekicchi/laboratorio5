#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main()
{
	srand(time(NULL));
	int r = rand()%100+1;
	int intento, min = 1, max = 100;
	
	do{
		cout << "adivine el numero entre " << min << " y " << max << ": ";
		cin >> intento;
		
		if (intento == r)
			break;
			
		if (intento < r)
		{
			cout << "El numero ingresado es menor al secreto" << endl;
			min = intento;
		}
		else
		{
			cout << "El numero ingresado es mayor al secreto" << endl;
			max = intento;
		}
		
	} while (intento != r);
	cout << "Felicidades! Adivino el numero";
	
	return 0;
}


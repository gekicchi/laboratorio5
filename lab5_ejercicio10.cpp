#include <iostream>
using namespace std;

struct Registro{
	float notas[3];
	float prom;
};

struct Alumno{
	string nombre;
	int edad;
	int matricula;
	Registro registro;
};

void ingresar_datos(Alumno *al);
float calcular_promedio(float notas[]);
void imprimir_alumno(Alumno *al);

int main()
{
	Alumno *al1 = new Alumno, *al2 = new Alumno;
	
	cout << "Alumno 1\n";
	ingresar_datos(al1);
	cout << "Alumno 2\n";
	ingresar_datos(al2);
	
	imprimir_alumno(al1);
	imprimir_alumno(al2);
	
	return 0;
}

void ingresar_datos(Alumno *al)
{
	string nom;
	int edad, mat;
	Registro reg = {};
	
	cout << "Nombre: ";
	cin >> nom;
	
	cout << "Edad: ";
	cin >> edad;
	
	cout << "Num Matricula: ";
	cin >> mat;
	
	for (int i=0; i<3; i++)
	{
		cout <<  i+1 << " Nota: ";
		cin >> reg.notas[i];
	}
	
	reg.prom = calcular_promedio(reg.notas);
	
	al->nombre = nom;
	al->edad = edad;
	al->matricula = mat;
	al->registro = reg;
}

float calcular_promedio(float notas[])
{
	float prom = 0;
	
	for (int i=0; i<3; i++)
	{
		prom += notas[i];
	}
	
	return prom/3;
}

void imprimir_alumno(Alumno *al)
{
	cout << "Alumno " << al->nombre << endl;
	cout << "Edad: " << al->edad << endl;
	cout << "Num Matricula: " << al->matricula << endl;
	cout << "Notas: ";
	for (int i=0; i<3; i++)
	{
		if (i < 2)
			cout << al->registro.notas[i] << ", ";
		else
			cout << al->registro.notas[i] << endl;
	}
	cout << "Promedio: " << al->registro.prom << endl;
}

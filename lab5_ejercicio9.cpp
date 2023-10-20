#include <iostream>
using namespace std;

enum Categoria { Juvenil, Senior, Veterano };

struct Ciclista{
	string nombre;
	string club;
	int edad;
	Categoria categoria;
};

Ciclista crear_ciclista(string nom, string club, int edad)
{
	Ciclista cic = {};
	cic.nombre = nom;
	cic.edad = edad;
	cic.club = club;
	
	if (cic.edad <= 18)
		cic.categoria = Juvenil;
	else if (cic.edad > 40)
		cic.categoria = Veterano;
	else
		cic.categoria = Senior;
	
	return cic;
}

int main()
{
	string nombre, club;
	int edad;
	Ciclista cic = {};
	
	cout << "Nombre: ";
	cin >> nombre;
	
	cout << "Edad: ";
	cin >> edad;
	
	cout << "Club: ";
	cin >> club;
	
	cic = crear_ciclista(nombre, club, edad);
	
	cout << "Cicilista " << cic.nombre << "\nEdad: " << cic.edad << "\nClub: " << cic.club << "\nCategoria: " << cic.categoria;
	
	return 0;
}

#include <iostream>
using namespace std;

bool Login(string user, int password)
{
	if (user == "user1" && password == 1234)
		return true;
		
	return false;
}

int main()
{
	string user;
	int password, tries = 0;
	bool login;
	
	do{
		tries++;
		cout << "Nombre de Usuario: ";
		cin >> user;
		
		cout << "Contrasena: ";
		cin >> password;
		
		login = Login(user, password);
	} while (!login && tries < 3);
	
	if (!login)
		cout << "ACCESO DENEGADO";
	else
		cout << "Bienvenido " << user;
	
	return 0;
}

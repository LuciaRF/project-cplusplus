#pragma once
#include <string>

using namespace std;

class Aves
{
public:
	int edad;
	string nombre;

	Aves();
	Aves(const int edad, const string& nombre);
	
	
	int getEdad() const;
	string getNombre() const;

	~Aves();
};


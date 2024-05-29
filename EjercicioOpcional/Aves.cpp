#include "Aves.h"
using namespace std;

Aves::Aves():edad(10),nombre("pepito") {}
Aves::Aves(const int edad, const string& nombre):edad(edad),nombre(nombre) {}

int Aves::getEdad() const
{
	return edad;
}

string Aves::getNombre() const
{
	return nombre;
}

#pragma once

#ifndef PERSONA_H
#define PERSONA_H

#include <string>

class Persona
{
public:
    // Constructor
    Persona(const std::string& nombre, int edad);

    // Getters
    std::string getNombre() const;
    int getEdad() const;

    // Setters
    void setNombre(const std::string& nombre);
    void setEdad(int edad);

private:
    std::string nombre;
    int edad;
};

#endif // PERSONA_H
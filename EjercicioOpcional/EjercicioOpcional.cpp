// EjercicioOpcional.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

//#include "Vectoring4.h"
#include "Aves.h"
#include "Persona.h"
using namespace std;

#include <iostream>
#include <array>
#include <string>
template <typename T>

T sumas(T x, T y)
{
    return x + y;
}

template <typename C>
class Vectors4
{
private:
    array<C, 4> elementos;
public:

    Vectors4(const array<C, 4>& elementos) : elementos(elementos) {}
    ~Vectors4() {}

    C getComponent(int index) const
    {
        return elementos[index];
    }
   
    /*auto getNormalizacion(array<C, 4> lista)
    {
        auto sum = 0.0f;
        int len = lista.size();

        for (int i = 0; i <= len-1; i++)
        {
            sum += pow(i,2);
        }

        return sqrt(sum);
    }*/
        
};

template <typename U>
class Hogwarts 
{
private:
    string nombre;
    string apellido;
    int edad;
    array<U, 4> elements;
public:
    Hogwarts(const string& nombre, const string& apellido, int edad, const array<U, 4>& elements)
        : nombre(nombre), apellido(apellido), edad(edad), elements(elements) {}

    ~Hogwarts() {}

    void getNombre() const
    {
        cout << "El nombre del alumno es: " << nombre << endl;
    }

    void getApellido() const
    {
        cout << "El apellido del alumno es: " << nombre << endl;
    }

    void getEdad() const
    {
        cout << "La edad del alumno es : " << edad << endl;
    }

    void getElement() const
    {
        for (int i=0; i<=3; i++)
        {
            cout << elements[i] << endl;
        }
    }
};

class Animal
{
private:
    int patas;
    string especie;

public:
    Animal(const int patas, const string especie)
    {
        this->patas = patas;
        this->especie = especie;
    }
    void getEspecie()
    {
        cout << "La especie es: " << especie << endl;
    } 
    void getpatas()
    {
        cout << "Las patas don: " << patas << endl;
    }

    ~Animal(){} //Destructor

};

class Gato : public Animal
{
private:
    bool bigotes;
public:
    Gato(int patas, string especie, bool bigotes) :Animal(patas, especie), bigotes(bigotes)
    {
        this->bigotes = bigotes;
    }

    void setBigotes(bool activar)
    {
        bigotes = true;
    }

};

template <typename H>
class Vector4
{
private:
    H x, y, z, w;
    array<H, 2> col;
public:
    Vector4():x(0), y(0), z(0), w(0), col({0,0}) {}
    Vector4(H x, H y, H z, H w):x(x),y(y),z(z),w(w) {}
    ~Vector4(){}

    H getX() const
    {
        return x;
    }
    H getY() const
    {
        return y;
    }
    H getZ() const
    {
        return z;
    }
    H getW() const
    {
        return w;
    }

    void setX(H value) const
    {
        this->x = value;
    }
    void setY(H value) const
    {
        this->y = value;
    }
    void setZ(H value) const
    {
        this->z = value;
    }
    void setW(H value) const
    {
        this->w = value;
    }

    void Normalizacion()
    {
        int length = sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2) + pow(w, 2));

        x /= length;
        y /= length;
        z /= length;
        w /= length;
    }

    Vector4<H> operator+(const Vector4<H>& other)
    {
        Vector4<H>(
            x + other.x,
            y + other.y,
            z + other.z,
            w + other.w
        )
    }

};

int main()
{
    std::cout << "El resultado de la suma es: "<< sumas(1,2) << endl;

    Animal * animal1 = new Animal(4, "perro");
    animal1->getEspecie();

    array<int, 4> elementos = { 1, 2, 3, 4 };
    array<int, 4> elementosfloat = { 1, 2, 3, 4 };
    Hogwarts<int> alumno1("Harry", "Potter", 14, elementos);

    Hogwarts<int>* alumno2 = new Hogwarts<int>("Ginny", "Weasley", 12, elementosfloat);


    alumno1.getElement();

    Vectors4<int> vector1(elementosfloat);
    cout << "elemento: " << vector1.getComponent(2) << endl;

    //Vectoring4<float> v1(2.3f,1.2f,4.2f,4.1f);
    //Vectoring4<float> v2();
    Aves * ave = new Aves(1, "Tomatito");

    Persona persona("Juan", 30);

    std::cout << "Nombre: " << persona.getNombre() << std::endl;
    std::cout << "Edad: " << persona.getEdad() << std::endl;

    // Modificar los datos de la persona
    persona.setNombre("Maria");
    persona.setEdad(25);

    // Mostrar los datos modificados
    std::cout << "Nombre: " << persona.getNombre() << std::endl;
    std::cout << "Edad: " << persona.getEdad() << std::endl;
}


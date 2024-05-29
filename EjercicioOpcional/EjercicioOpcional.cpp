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
    //array<H, 2> col;
public:
    Vector4():x(0), y(0), z(0), w(0) {}
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

        this->x /= length;
        this->y /= length;
        this->z /= length;
        this->w /= length;
    }

    Vector4<H> operator+(const Vector4<H>& other)
    {
        return Vector4<H>(
            x + other.x,
            y + other.y,
            z + other.z,
            w + other.w
        );
    }

    Vector4<H> operator-(const Vector4<H>& other)
    {
        return Vector4<H>(
            x - other.x,
            y - other.y,
            z - other.z,
            w - other.w
        );
    }
    H dot(const Vector4<H>& other)
    {
        return
            x * other.x +
            y * other.y +
            z * other.z +
            w * other.w;
    }
    Vector4<H> cross(const Vector4<H>& other)
    {
        return Vector4<H>(
            y * other.z - z * other.y,
            z * other.x - x * other.z,
            x * other.y - z * other.y,
            0
        );
    }
    void print() const {
        std::cout << "(" << x << ", " << y << ", " << z << ", " << w << ")\n";
    }

};

template <typename H>
class Matriz4x4
{
private:
    array<Vector4<H>, 4> matriz;
public:

    Matriz4x4() : matriz{ { Vector4<H>(0, 0, 0, 0),
                          Vector4<H>(0, 0, 0, 0),
                          Vector4<H>(0, 0, 0, 0),
                          Vector4<H>(0, 0, 0, 0) } } {}  //matriz cero, ojo los array se inician con {{}}

    Matriz4x4(int identity) //constructor inicializa matriz identidad
    {
        if (identity == 1)
        {
            matriz = {
            Vector4<H>(1, 0, 0, 0),
            Vector4<H>(0, 1, 0, 0),
            Vector4<H>(0, 0, 1, 0),
            Vector4<H>(0, 0, 0, 1) };
        }
    }

    Matriz4x4(const array<Vector4<H>,4> matriz) : matriz(matriz) {} //constructor recibe 4 arrays a la vez

    Matriz4x4(const array<H, 4>& v1, const array<H, 4>& v2, const array<H, 4>& v3, const array<H, 4>& v4)
        : matriz{ { Vector4<H>(v1[0], v1[1], v1[2], v1[3]),
                   Vector4<H>(v2[0], v2[1], v2[2], v2[3]),
                   Vector4<H>(v3[0], v3[1], v3[2], v3[3]),
                   Vector4<H>(v4[0], v4[1], v4[2], v4[3]) } } {}

    // Métodos para acceder a una fila
    Vector4<H>& operator[](std::size_t index) {
        return matriz[index];
    }

    const Vector4<H>& operator[](std::size_t index) const {
        return matriz[index];
    }

    // Método para imprimir la matriz
    void print() const {
        for (const auto& vec : matriz) {
            vec.print();
        }
    }

};


int main()
{
    Vector4<float>* v1 = new Vector4<float>(1, 2, 3, 4);
    Vector4<float>* v2 = new Vector4<float>(3, 7, 3, 5);

    cout <<"El vector x es:" << v1->getX() << endl;

    Vector4<float> sumar = *v1 + *v2;
    Vector4<float> differ = *v1 - *v2;
    float dotFloat = v1->dot(*v2);
    Vector4<float> crossFloat = v1->cross(*v2);

    cout << "Sum: ";
    sumar.print();
    cout << "Difference: ";
    differ.print();
    cout << "Dot Product: " << dotFloat << "\n";
    cout << "Cross Product: ";
    crossFloat.print();

    cout <<"El vector sin normalizar es:" ;
    v1->print();
    v1->Normalizacion();
    cout << "El vector normalizado es:" ;
    v1->print();
    std::cout << "El resultado de la suma es: "<< sumas(1,2) << endl;

    Matriz4x4<float>* m1 = new Matriz4x4<float>();
    Matriz4x4<float>* m2 = new Matriz4x4<float>(1);
    
    Matriz4x4<float> m3[] = {v1,v2,v1,v2};



    /*Ejemplos de clases*/

    Animal * animal1 = new Animal(4, "perro");
    animal1->getEspecie();

    array<int, 4> elementos = { 1, 2, 3, 4 };
    array<int, 4> elementosfloat = { 1, 2, 3, 4 };
    Hogwarts<int> alumno1("Harry", "Potter", 14, elementos);

    Hogwarts<int>* alumno2 = new Hogwarts<int>("Ginny", "Weasley", 12, elementosfloat);


    alumno1.getElement();

    Vectors4<int> vector1(elementosfloat);
    cout << "elemento: " << vector1.getComponent(2) << endl;

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


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

    Matriz4x4(const Vector4<H>& v1, const Vector4<H>& v2, const Vector4<H>& v3, const Vector4<H>& v4)
        : matriz{ { Vector4<H>(v1.getX(), v1.getY(), v1.getZ(), v1.getW()),
                   Vector4<H>(v2.getX(), v2.getY(), v2.getZ(), v2.getW()),
                   Vector4<H>(v3.getX(), v3.getY(), v3.getZ(), v3.getW()),
                   Vector4<H>(v4.getX(), v4.getY(), v4.getZ(), v4.getW()) } } {}

    // Métodos para acceder a una fila y que pueda modificarse el contenido
    Vector4<H>& operator[](size_t index) {
        return matriz[index];
    }
    //solo lectura
    const Vector4<H>& operator[](size_t index) const {
        return matriz[index];
    }
    
    Matriz4x4<H>& operator*(Matriz4x4<H> other)
    {
        Vector4<H> v1(other[0].getX(),other[1].getX(),other[2].getX(),other[3].getX());
        Vector4<H> v2(other[0].getY(),other[1].getY(),other[2].getY(),other[3].getY());
        Vector4<H> v3(other[0].getZ(),other[1].getZ(),other[2].getZ(),other[3].getZ());
        Vector4<H> v4(other[0].getW(),other[1].getW(),other[2].getW(),other[3].getW());

        Vector4<H> r1(
            matriz[0].dot(v1),
            matriz[0].dot(v2),
            matriz[0].dot(v3),
            matriz[0].dot(v4)
            );
        Vector4<H> r2(
            matriz[1].dot(v1),
            matriz[1].dot(v2),
            matriz[1].dot(v3),
            matriz[1].dot(v4)
            );
        Vector4<H> r3(
            matriz[2].dot(v1),
            matriz[2].dot(v2),
            matriz[2].dot(v3),
            matriz[2].dot(v4)
            );
        Vector4<H> r4(
            matriz[3].dot(v1),
            matriz[3].dot(v2),
            matriz[3].dot(v3),
            matriz[3].dot(v4)
            );

        Matriz4x4<H> resultM = { r1, r2, r3, r4 };
        
        return resultM;
    }

    Vector4<H>& operator*(Vector4<H> other)
    {
        Vector4<H> v1(other.getX(), other.getX(), other.getX(), other.getX());


        Vector4<H> r1(
            matriz[0].dot(v1),
            matriz[1].dot(v1),
            matriz[2].dot(v1),
            matriz[3].dot(v1)
        );

        return r1;
    }

    Matriz4x4<H>& operator*(H other)
    {
        Vector4<H> r1(
            matriz[0].getX() * other,
            matriz[0].getY() * other,
            matriz[0].getZ() * other,
            matriz[0].getW() * other
        );
        Vector4<H> r2(
            matriz[1].getX() * other,
            matriz[1].getY() * other,
            matriz[1].getZ() * other,
            matriz[1].getW() * other
        );
        Vector4<H> r3(
            matriz[2].getX() * other,
            matriz[2].getY() * other,
            matriz[2].getZ() * other,
            matriz[2].getW() * other
        );
        Vector4<H> r4(
            matriz[3].getX() * other,
            matriz[3].getY() * other,
            matriz[3].getZ() * other,
            matriz[3].getW() * other
        );

        Matriz4x4<H> resultM = { r1, r2, r3, r4 };

        return resultM;
    }

    Matriz4x4<H>& operator/(H other)
    {
        Vector4<H> r1(
            matriz[0].getX() / other,
            matriz[0].getY() / other,
            matriz[0].getZ() / other,
            matriz[0].getW() / other
        );
        Vector4<H> r2(
            matriz[1].getX() / other,
            matriz[1].getY() / other,
            matriz[1].getZ() / other,
            matriz[1].getW() / other
        );
        Vector4<H> r3(
            matriz[2].getX() / other,
            matriz[2].getY() / other,
            matriz[2].getZ() / other,
            matriz[2].getW() / other
        );
        Vector4<H> r4(
            matriz[3].getX() / other,
            matriz[3].getY() / other,
            matriz[3].getZ() / other,
            matriz[3].getW() / other
        );

        Matriz4x4<H> resultM = { r1, r2, r3, r4 };

        return resultM;
    }

    Matriz4x4<H>& operator+(Matriz4x4<H> other)
    {
        Matriz4x4<H> resultM = {
            matriz[0] + other[0],
            matriz[1] + other[1],
            matriz[2] + other[2],
            matriz[3] + other[3]

        };

        return resultM;
    }

    Matriz4x4<H>& operator-(Matriz4x4<H> other)
    {
        Matriz4x4<H> resultM = {
            matriz[0] - other[0],
            matriz[1] - other[1],
            matriz[2] - other[2],
            matriz[3] - other[3]

        };

        return resultM;
    }

    // Método para imprimir la matriz
    void print() const {
        for (const auto& vec : matriz) {
            vec.print();
        }
    }

};

//template <typename H>
//class

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

    array<float, 4> a1 = { 7,2,1,3 };
    array<float, 4> a2 = { 3,2,6,3 };

    Matriz4x4<float>* m1 = new Matriz4x4<float>();
    Matriz4x4<float>* m2 = new Matriz4x4<float>(1);
    Matriz4x4<float> m3(a1,a1,a2,a2);


    m1->print();
    m2->print();
    cout << "el w: " << m3[0].getX() * 2 << endl;
    m3.print();
    m3 = m3 * 2;
    m3.print();
    m3 = m3 / 2;
    m3.print();
    cout <<".........\n" << endl;
    
    Matriz4x4<float> mulMatriz = m3 * m3;

    cout << "La multiplicacion de matrices es: \n" << endl;

    mulMatriz.print();
    cout << ".........\n" << endl;
    Matriz4x4<float> mulSuma = m3 + *m2;

    mulSuma.print();

    cout << ".........\n" << endl;
    Matriz4x4<float> mulResta = m3 + *m2;

    mulSuma.print();

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


#pragma once
#ifndef VECTORING4_H
#define VECTORING4_H
using namespace std;

#include <string>
#include <iostream>
#include <cmath>

template <typename T>
class Vectoring4
{
private:
	T x, y, z, w;
public:
	Vectoring4();
	Vectoring4(T x, T y, T z, T w);
	~Vectoring4();
	//acceso a componentes
	T getX() const;
	T getY() const;
	T getZ() const;
	T getW() const;

	void setX(T elemento);
	void setY(T elemento);
	void setZ(T elemento);
	void setW(T elemento);

	Vectoring4 normalizacion();

	//operadores aritmeticos

	Vectoring4 operator+(const Vectoring4<T>& other) const;
	Vectoring4 operator-(const Vectoring4<T>& other) const;

	T dot(const Vectoring4<T>& other) const;

	T cross(const Vectoring4<T>& other) const;
};
#endif // VECTORING4_H


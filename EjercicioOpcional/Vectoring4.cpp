#include "Vectoring4.h"

template<typename T>
Vectoring4<T>::Vectoring4() : x(0), y(0), z(0), w(0) {}

template<typename T>
Vectoring4<T>::Vectoring4(T x, T y, T z, T w) : x(x), y(y), z(z), w(w) {}

template<typename T>
Vectoring4<T>::~Vectoring4(){}

template<typename T>
T Vectoring4<T>::getX() const
{
	return x;
}
template<typename T>
T Vectoring4<T>::getY() const
{
	return y;
}
template<typename T>
T Vectoring4<T>::getZ() const
{
	return z;
}
template<typename T>
T Vectoring4<T>::getW() const
{
	return w;
}
template<typename T>
void Vectoring4<T>::setX(T elemento)
{
	this->x = elemento;
}
template<typename T>
void Vectoring4<T>::setY(T elemento)
{
	this->y = elemento;
}
template<typename T>
void Vectoring4<T>::setZ(T elemento)
{
	this->z = elemento;
}
template<typename T>
void Vectoring4<T>::setW(T elemento)
{
	this->w = elemento;
}
template<typename T>
Vectoring4<T> Vectoring4<T>::normalizacion()
{
	T length = sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2) + pow(w, 2));
	return Vectoring4<T>(
		this->x / length,
		this->y / length,
		this->z / length,
		this->w / length
	);
}
template<typename T>
Vectoring4<T> Vectoring4<T>::operator+(const Vectoring4<T>& other) const
{
	return Vectoring4<T>(
		x + other.x,
		y + other.y,
		z + other.z,
		w + other.w
	);
}
template<typename T>
Vectoring4<T> Vectoring4<T>::operator-(const Vectoring4<T>& other) const
{
	return Vectoring4<T>(
		x - other.x,
		y - other.y,
		z - other.z,
		w - other.w
	);
}
template<typename T>
T Vectoring4<T>::dot(const Vectoring4<T>& other) const
{
	return x * other.x + x * other.y + y * other.z + z;
}

template<typename T>
T Vectoring4<T>::cross(const Vectoring4<T>& other) const
{
	return Vectoring4<T>(
		y*other.z-z*other.y,
		z*other.x-x*other.z,
		x*other.y-z*other.y,
		0
	);
}
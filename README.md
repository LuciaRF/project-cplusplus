# project-cplusplus

# Matriz4x4 y Vector4

Este proyecto implementa una clase `Vector4` y una clase `Matriz4x4` en C++. La clase `Vector4` representa un vector en un espacio de 4 dimensiones, mientras que la clase `Matriz4x4` representa una matriz de 4x4. Ambas clases son genéricas y pueden trabajar con diferentes tipos de datos, como `float`, `double`, `int`, etc.

## Características

### Clase `Vector4`

- Representa un vector de 4 componentes (`x`, `y`, `z`, `w`).
- Métodos para acceder y modificar los componentes.
- Métodos para operaciones aritméticas, como la normalización y el producto punto (`dot product`).

### Clase `Matriz4x4`

- Representa una matriz de 4x4.
- Inicialización con ceros, matrices identidad y matrices específicas.
- Operadores de acceso a filas y elementos individuales.
- Operador de multiplicación de matrices.

## Ejemplo de Uso

### Vector4

```cpp
#include "Vector4.h"

int main() {
    Vector4<float> v1(1.0f, 2.0f, 3.0f, 4.0f);
    Vector4<float> v2(5.0f, 6.0f, 7.0f, 8.0f);

    float dotProduct = v1.dot(v2);
    std::cout << "Dot Product: " << dotProduct << std::endl;

    return 0;
}

```
El proyecto **Render** implementa un framebuffer en C++ que representa una pantalla en la que cada píxel puede ser "1" o "0". La clase `Render` permite crear un framebuffer de un tamaño específico, manipular los píxeles y visualizar el estado del framebuffer.

## Características

- Representación del framebuffer como una matriz bidimensional de tipo `char`.
- Posibilidad de definir la resolución (ancho y alto) del framebuffer.
- Coordenadas del framebuffer centradas en el medio de la matriz.
- Métodos para modificar y visualizar los píxeles del framebuffer.

## Requisitos

- Compilador compatible con C++11 o superior.
- `cmake` (opcional, para facilitar la compilación).

## Instalación

1. Clona este repositorio:
    ```bash
    git clone https://github.com/tu_usuario/render.git
    cd render
    ```

2. Compila el proyecto:
    ```bash
    g++ -o render main.cpp
    ```

3. Ejecuta el programa:
    ```bash
    ./render
    ```
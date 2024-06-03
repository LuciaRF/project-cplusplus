#pragma once
#include <iostream>
#include <vector>

using namespace std;
typedef vector<vector<char>> vec_b;

class Render
{
private:
    int width;
    int height;
    vec_b buffer; // Matriz bidimensional de tipo char

public:
    Render(int width, int height, vec_b buffer);

    //El constructor inicializa el tamaño del buffer con height x width (filXcol)
    //y lo inicializa a 0

    void PutPixel(int x, int y);

    void resetBuffer();

    void Draw();
};


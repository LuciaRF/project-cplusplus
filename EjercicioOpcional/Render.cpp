#include "Render.h"

Render::Render(int width, int height, vec_b buffer) :
    width(width), height(height), buffer(height, vector<char>(width, '0')) {}

void Render::PutPixel(int x, int y)
{
    int x_local = 0;
    int y_local = 0;
    bool esParX = true;
    bool esParY = true;

    width % 2 == 0 ? esParX = true : esParX = false;
    height % 2 == 0 ? esParY = true : esParY = false;

    if (!esParX)
    {
        int N = width / 2;
        x_local = x + N;
    }

    if (!esParY)
    {
        int N = height / 2;
        if (N <= 0)
        {
            y_local = y - N;
        }
        else
        {
            y_local = (N - y);

        }
    }
    cout << "x_local: " << x_local << ", y_local: " << y_local << endl;

    buffer[y_local][x_local] = '1';
    cout << buffer[y_local][x_local] << endl;

}

void Render::resetBuffer()
{
    for (int i = 0; i <= width; i++)
    {
        for (int j = 0; j = height; j++)
        {
            buffer[j][i] = '0';
        }
    }
}

void Render::Draw()
{
    cout << "El render: ";
    cout << buffer[0][4] << endl;
    cout << width << endl;
    cout << height << endl;
    cout << "\n";

    for (int j = 0; j < height; j++)
    {
        for (int i = 0; i < width; i++)
        {
            cout << buffer[j][i] << " ";
        }
        cout << "\n";
    }

}
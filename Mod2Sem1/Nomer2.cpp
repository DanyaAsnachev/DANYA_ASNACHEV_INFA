#include <stdio.h>

namespace Cube 
{
    int a = 5;

    int CubeV(int x)
    {
        return x * x * x;
    }
}


int main() 
{
    printf("%i\n", Cube::CubeV(Cube::a));
}
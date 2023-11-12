#include <stdio.h>

namespace Cube 
{
    int a = 5;

    int CubeR(int& x)
    {
        return x * x * x;
    }
}


int main() 
{
    printf("%i\n", Cube::CubeR(Cube::a));
}
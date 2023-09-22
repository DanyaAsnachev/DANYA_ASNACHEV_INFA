#include <stdio.h>

int main() 
{
    int a, b, c, k = 0;
    scanf("%i%i%i", &a, &b, &c);

    if (((b - a == 1) && (c - b == 1)) || ((a - b == 1) && (b - c == 1)))
    {
        printf("Consecutive\n");
        k += 1;
    }
    if ((b - a >= 1) && (c - b >= 1))
    {
        printf("Increasing\n");
        k += 1;
    }
    if ((a - b >= 1) && (b - c >= 1))
    {
        printf("Decreasing\n");
        k += 1;
    }
    if ((a == b) && (b == c))
    {
        printf("Equal\n");
        k += 1;
    }
    if (k == 0)
    {
        printf("None\n");
    }
}

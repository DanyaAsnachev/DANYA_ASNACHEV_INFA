#include <stdio.h>
#include <limits.h>

int main() 
{
    int a, b;
    int n, LenghtLoc = 1, Lenght = 1, n_answer = 0;
    printf("Write a and b\n");
    scanf("%i %i", &a, &b);
    printf("a = %i, b = %i\n", a, b);
    while (a <= b)
    {
        n = a;
        while (n > 1)
        {
            if (n % 2 == 0)
            {
                n = n/2;
                LenghtLoc += 1;
            }
            else
            {
                n = 3*n + 1;
                LenghtLoc += 1;
            }
        }
        if (LenghtLoc >= Lenght )
        {
            Lenght = LenghtLoc;
            n_answer = a;
        }
        a += 1;
        LenghtLoc = 1;
    }
    printf("\n");
    printf("n = %i, Lenght = %i",n_answer, Lenght);
}
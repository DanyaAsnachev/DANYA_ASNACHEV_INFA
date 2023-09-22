#include <stdio.h>

int main() 
{
    int n, k = 0;
    printf("Write a number: ");
    scanf("%i", &n);
    while (k < n)
    {
        k += 1;
        printf("%3i -> %3i -> %3i", k, k*k, k*k*k);
        printf("\n");
    }

}

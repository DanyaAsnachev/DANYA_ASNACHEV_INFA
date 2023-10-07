#include <stdio.h>

int main()
{
    char a[10] = {77, 73, 80, 84, 0};
    char b[10] = {'M', 'I', 'P', 'T', '\0'};
    char c[10] = "MIPT";

    for (int i = 0; i < 10; ++i)
        printf("%i ", a[i]);
    printf("\n");


    for (int i = 0; i < 10; ++i)
        printf("%i ", b[i]);
    printf("\n");


    for (int i = 0; i < 10; ++i)
        printf("%i ", c[i]);
    printf("\n");
}
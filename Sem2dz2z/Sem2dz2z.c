#include <stdio.h>
int main()
{
    int a[1000];
    int n, newelement, index;
    scanf("%i", &n);

    for (int i = 0; i < n; ++i)
    {
        scanf("%i", &a[i]);
    }

    n = n + 1;
    scanf("%i %i", &newelement, &index);

    for (int i = 0; i < n; ++i)
    {
        if (n - i > index + 1)
        {
            a[n - i] = a[n - i - 1];
        }
        if (n - i == index + 1)
            a[n - i] = newelement;
    }
    for (int i = 0; i < n; ++i)
         printf("%i ", a[i]);
    printf("\n");
}
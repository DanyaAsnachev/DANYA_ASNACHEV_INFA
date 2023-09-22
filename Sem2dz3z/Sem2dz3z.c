#include <stdio.h>
int main()
{
    int a[1000];
    int n, index;
    scanf("%i", &n);

    for (int i = 0; i < n; ++i)
    {
        scanf("%i", &a[i]);
    }

    n = n - 1;
    scanf("%i", &index);

    for (int i = 0; i <= n; ++i)
    {
        if (i >= index)
        {
            a[i] = a[i + 1];
        }
        if (i < n)
            printf("%i ", a[i]);
    }
    printf("\n");
}
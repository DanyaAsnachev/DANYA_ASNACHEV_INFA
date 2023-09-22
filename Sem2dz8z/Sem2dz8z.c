#include <stdio.h>
int main()
{
    int a[1000];
    int n, number, k = 0, t = 0;
    scanf("%i", &n);

    for (int i = 0; i < n; ++i)
    {
        scanf("%i", &a[i]);
    }
    scanf("%i", &number);

    k = 2 * n;
    for (int i = 0; i < k; ++i)
    {
        if (i < n)
        {
          a[((i + number) % n ) + n] = a[i];
        }
        if (i >= k -  n)
            printf("%i ", a[i]);
    }
    printf("\n");
}
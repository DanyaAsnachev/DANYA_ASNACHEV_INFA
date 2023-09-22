#include <stdio.h>
int main()
{
    int a[1000];
    int n, k = 0, t = 0, p = 0;
    scanf("%i", &n);

    for (int i = 0; i < n; ++i)
    {
        scanf("%i", &a[i]);
    }

    k = 2 * n;
    for (int i = 0; i < k; ++i)
    {
        if ((a[i] % 2 != 0) && (i < n))
        {
            a[k - n + t] = a [i];
            t += 1;
        }
        if ((a[i] % 2 == 0) && (i < n))
        {
             a[k - p - 1] = a [i];
             p += 1;
        }
        if (i >= k - n)
            printf("%i ", a[i]);
    }
    printf("\n");
}
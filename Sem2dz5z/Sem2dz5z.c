#include <stdio.h>
int main()
{
    int a[1000];
    int n, k = 0, t = 0;
    scanf("%i", &n);

    for (int i = 0; i < n; ++i)
    {
        scanf("%i", &a[i]);
    }

    k = 2 * n;
    for (int i = 0; i < k; ++i)
    {
        if ((a[i] >= 0) && (i < n))
        {
            a[k - n + t] = a [i];
            t += 1;
        }
        if ((i >= k - n) && (i < k - n + t))
            printf("%i ", a[i]);
    }
    printf("\n");
}
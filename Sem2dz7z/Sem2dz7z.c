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

    k = 3 * n;
    for (int i = 0; i < k; ++i)
    {
        if (i < n)
        {
            a[k - (2 * n) + t] = a[i];
            a[k - (2 * n) + t + 1] = a[i];
            t += 2;
        }
        if (i >= k - (2 * n))
            printf("%i ", a[i]);
    }
    printf("\n");
}
#include <stdio.h>
int main()
{
    int a[1000];
    int n, k = 0;
    scanf("%i", &n);
    for (int i = 0; i < n; ++i)
    {
        scanf("%i", &a[i]);
    }
    k = n;
    n = n * 2;
    for (int i = 0; i < n; ++i)
    {
        if (i >= k)
        {
            a[i] = a[i - k];
        }
        printf("%i ", a[i]);
    }
    printf("\n");
}
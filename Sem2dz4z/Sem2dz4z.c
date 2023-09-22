#include <stdio.h>
int main()
{
    int a[1000];
    int n, index1, index2;
    scanf("%i", &n);

    for (int i = 0; i < n; ++i)
    {
        scanf("%i", &a[i]);
    }

    //n = n - (index2 - index1);
    scanf("%i %i", &index1, &index2);

    for (int i = 0; i < n; ++i)
    {
        if (i >= index1)
        {
            a[i] = a[i + index2 - index1];
        }
        if (i < n - (index2 - index1))
            printf("%i ", a[i]);
    }
    printf("\n");
}
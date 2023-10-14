#include <stdio.h>


int main()
{
    char a[1000];
    scanf("%s", &a);
    int k = 1;
    
    while (a[k - 1])
    {
        for (int j = 0; j < k; j++)
        {
            printf("%c", a[j]);
        }

        printf("\n");

        k += 1;
    }
}

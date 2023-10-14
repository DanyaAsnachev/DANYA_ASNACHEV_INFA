#include <stdio.h>
#include <string.h>

void is_palindrom(const char a[])
{
    int i = 0, k = strlen(a) - 1, t = 0;

    while (k > i)
    {
        if (a[i] != a[k])
        {
            printf("No\n");
            t = 1;
        }    
        
        i += 1;
        k -= 1;
    }
    if ( t == 0)
    {
        printf("Yes\n");
    }
    
}

int main()
{
    char a[1000];
    scanf("%s", a);
     
    is_palindrom(a);
}
#include <stdio.h>
#include <string.h>

void delete_chars(char str[], char c) 
{
    int i = 0, j = 0;

    for (int i = 0; str[i]; i++) 
    {        
        if (str[i] != c) 
        {
            str[j] = str[i];

            j += 1;
        }
    }

    str[j] = '\0';
}

int main() 
{
    char str[100];
    scanf("%s", str);

    char t;
    scanf(" %c", &t);

    delete_chars(str, t);

    printf("%s\n", str);
}
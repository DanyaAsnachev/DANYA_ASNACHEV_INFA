#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
    char word[100]; 
    int k;
    sscanf(argv[1], "%s", &word);
    sscanf(argv[2], "%i", &k);

    for (int i = 0; i < k; i++) 
        printf("%s ", word);

    printf("\n");

}
#include <stdio.h>

int main() 
{
    int n, Lenght = 1, Max = 0;
    printf("Write your number: ");
    scanf("%i", &n);
    Max = n;
    while (n > 1)
    {
    	printf("%i ", n);
    	if (n % 2 == 0)
    	{
    		n = n/2;
    		Lenght += 1;
    	}
    	else
    	{
    		n = 3*n + 1;
    		Lenght += 1;
    	}
    	if (n >= Max)
    		Max = n;

    }
    printf("\n");
    printf("Lenght = %i, Max = %i ", Lenght, Max);
}
#include <stdio.h>

void Bob(int n);

void Alice(int n);

void Alice(int n)
{
	if (n > 1)
	{
		n = (n * 3) + 1;
		printf("Alice: %i\n", n);
		Bob(n);
	}
}

void Bob(int n)
{
	while (n % 2 == 0)
	{
		n = n / 2;
		printf("Bob: %i\n ", n);
	}
	if ((n % 2 != 0) && ( n > 1))
	{
		Alice(n);
	}
	if (n == 1)
	{
		printf("\n");
	}	
}

int main()
{
	int n;
	scanf("%i", &n);
	Alice(n);
}
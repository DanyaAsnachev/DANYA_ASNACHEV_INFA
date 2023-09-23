#include <stdio.h>

int print_binary(int a)
{
	if (a != 0)
	{
		print_binary(a / 2);
		printf("%i", a % 2);
	}
}

int print_binary1(int x, int n, int number)
{
	if (x >= 1)
	{
		number += (x % 2)* n;
		//printf("%i %i %i\n", x, n, (x % 2)* n);
		n = n * 10;
		x = x / 2;
		//printf("%i %i %i\n", x, n, number);
		if (x == 1)
		{
			number += (x % 2)* n;
			return number;
		}
		print_binary1(x, n, number);
	}
	if (x < 1)
		return 0;

}


int main()
{
	int a;
	scanf("%i", &a);
	if (a == 0)
		printf("%i\n", 0);
	else
		print_binary(a);
	printf("\n");
}

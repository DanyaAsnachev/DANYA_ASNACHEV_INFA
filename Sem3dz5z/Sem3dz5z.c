#include <stdio.h>

void sum_of_digits (int x)
{
	int del = 1, sum = 0;
	while (x % del < x)
	{
		del = del * 10;
		sum = sum + ((x % del) / (del / 10));
		//printf("%i %i %i\n", sum, del, ((x % del) / (del / 10)));
	}
	printf("%i\n", sum);
}

int sum_of_digits_rec(int x, int sum, int del)
{
	if (x % del < x)
	{
		del = del * 10;
		sum = sum + ((x % del) / (del / 10));
		sum_of_digits_rec(x, sum, del);
	}
	else
		return sum;
}

int main()
{
	int x, n = 0;
	int del = 1, sum = 0;
	scanf("%i", &x);
	sum_of_digits(x);
	printf("%i", sum_of_digits_rec(x, sum, del));
}
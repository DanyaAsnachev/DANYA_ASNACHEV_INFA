#include <stdio.h>

void last_digits(int a[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		a[i] = a[i] % 10;
		printf("%i ", a[i]);
	}
}

int main()
{
	int a[1000], n;
	scanf("%i", &n);
	for (int i = 0; i < n; ++i)
	{
		scanf("%i", &a[i]);
	}
	last_digits(a, n);
}
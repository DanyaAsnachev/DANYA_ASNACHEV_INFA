#include <stdio.h>

void count_even(int array[], int size)
{
	int k = 0;
	for (int i = 0; i < size; ++i)
	{
		if (array[i] % 2 == 0)
		{
			k += 1;
		}
	}
	printf("%i", k);
}

int main()
{
	int a[1000], n;
	scanf("%i", &n);
	for (int i = 0; i < n; ++i)
	{
		scanf("%i", &a[i]);
	}
	count_even(a, n);
}
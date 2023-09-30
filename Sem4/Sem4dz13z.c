#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void mult2_array(int* p, size_t n)
{
	for (int i = 0; i < n; i++)
	{
		p[i] *= 2;
	}
}

int main()
{
	int a[1000], n;
	scanf("%i", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%i", &a[i]);
	}

	int* p = &a[0];
	mult2_array(p, n);

	for (int i = 0; i < n; i++)
	{
		printf("%i ", a[i]);
	}
	printf("\n");
}
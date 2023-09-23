#include <stdio.h>

void reverse(int a[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		printf("%i ", a[size - 1 - i]);
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
	reverse(a, n);
}
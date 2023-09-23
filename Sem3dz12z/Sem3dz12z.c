#include <stdio.h>

void reverse(int a[], int size)
{
	int save = 0;
	for (int i = 0; i < size*2; ++i)
	{
		if (i < size)
		{
			for (int j = 0; j < size; ++j)
			{
				if (a[j] < a[j + 1])
				{
					save = a[j];
					a[j] = a[j + 1];
					a[j + 1] = save;
				}
			}
		}
		if ((i >= size) && (i < size * 2))
		{
			printf("%i ", a[i - size]);
		}
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
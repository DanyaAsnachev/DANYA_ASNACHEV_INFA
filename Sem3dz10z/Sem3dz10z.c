#include <stdio.h>

int fact(int a)
{
	int answer = 1;
	for(int i = 1; i <= a; ++i)
	{
		answer = answer * i;
	}
	if (a == 0)
	{
		return 0;
	}
	else
	{
		return answer;
	}
}

void factorials(int a[], int size)
{
	int k = 0;
	for (int i = 0; i < size; ++i)
	{
	    k = a[i];
		a[i] = fact(k);
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
	factorials(a, n);
}
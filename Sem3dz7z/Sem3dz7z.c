#include <stdio.h>

void trib(int n)
{ 
	int k = 0, a0, a1, a2, i = 3;
	a0 = 0;
	a1 = 0;
	a2 = 1;
	if (n == 0)
		printf("%i", a0);
	if (n == 1)
		printf("%i", a1);
	if (n == 2)
		printf("%i", a2);
	while ((i > 2) && ( i <= n))
	{
		k = a0 + a1 + a2;
		a0 = a1;
		a1 = a2;
		a2 = k;
		i += 1;
	}
	if (n > 2)
		printf("%i", k);
}

int main()
{
	int n;
	scanf("%i", &n);
	trib(n);
}
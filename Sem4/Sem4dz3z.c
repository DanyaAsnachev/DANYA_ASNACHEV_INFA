#include <stdio.h>

float yearfrac(int y, float d)
{
	float k;
	if (y % 4 == 0)
	{
		k = d / (365 + 1);
		return k;
	}
	else
	{
		k = d / 365;
		return d / (365);
	}
}

int main()
{
	int n, k;
	scanf("%i %i", &n, &k);
	printf("%f\n", yearfrac(n, k));
}
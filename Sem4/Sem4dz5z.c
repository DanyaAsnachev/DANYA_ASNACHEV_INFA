#include <stdio.h>
#include <math.h>

float count_PI(int n)
{
	float result = 1;
	for (int i = 2; i <= n; i++)
	{
		result += (pow(-1, i + 1) / (2 * i - 1));
	}
	return 4 * result;
}

int main()
{
	int n;
	scanf("%i", &n);
	printf("%f\n", count_PI(n));
}
#include <stdio.h>

unsigned long long comb(int n, int k)
{
	unsigned long long result = 1; 
	for (int i = (n - k + 1); i <= n; ++i)
			result *= i;
	return result;
}

int main()
{
	int n, k;
	scanf("%i %i", &n, &k);
	printf("%llu\n", comb(n, k));
}
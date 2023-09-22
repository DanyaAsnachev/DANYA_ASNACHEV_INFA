#include <stdio.h>

void triangel (int x)
{
	int k = 1, t = 1;
	while (k <= x)
	{
		while (t <= k)
		{
			t += 1;
			printf("*");
		}
		printf("\n");
		k += 1;
		t = 1;
	}
}

int main()
{
	int x;
	scanf("%i", &x);
	triangel(x);
}
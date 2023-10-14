#include <stdio.h>
#include <string.h>

int main()
{
	int n, x = 0, y = 0;
	scanf("%i", &n);

	for (int i = 0; i < n; i++)
	{
		char a[6];
		int k;
		scanf("%s %i", a, &k);

		if (strcmp(a, "North") == 0)
			y += k;
		if (strcmp(a, "East") == 0)
			x += k;
		if (strcmp(a, "South") == 0)
			y -= k;
		if (strcmp(a, "West") == 0)
			x -= k;
	}

	printf("%i %i\n", x, y);
}
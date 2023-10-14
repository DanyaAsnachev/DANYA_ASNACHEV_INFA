#include <stdio.h>


int main()
{
	char a[1000], b[1000];
	scanf("%s %s", a, b);

	int i = 0;

	while (a[i] && b[i])
	{
		printf("%c", a[i]);
		printf("%c", b[i]);

		i += 1;
	}

	while (b[i])
	{
		printf("%c", b[i]);

		i++;
	}
	

	while (a[i])
	{
		printf("%c", a[i]);

		i++;
	}
}
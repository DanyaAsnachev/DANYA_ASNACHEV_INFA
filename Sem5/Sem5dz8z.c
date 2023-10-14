#include <stdio.h>
#include <stdlib.h>

void encrypt(char* a, int k)
{
	for (int i = 0; a[i]; i++)
	{
		char n = a[i];
		if ((90 >= n) && ( n >= 65))
		{
			n = n - 65 + 1;
		}
		else if ( (122 >= n) && (n >= 97))
		{
			n = n - 97+ 1;
		}
		char t = a[i];

		if (t != ' ')
		{
			t = t + (k % 26)- (26 * ((n + (k % 26) - 1)/26));

			a[i] = t;
		}
	}
	printf("%s\n", a);
}

int main()
{
	char a[1000];
	int k;
	scanf("%i", &k);
	scanf(" %[^\n]", a);

	encrypt(a, k);
}
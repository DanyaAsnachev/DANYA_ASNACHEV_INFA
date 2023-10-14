#include <stdio.h>
#include <string.h>


int main()
{
	char a[1000], b = '!', k = 0, c[1000];
	scanf("%[^\n]", a);

	for (int i = 0; a[i]; i++)
	{
		if (a[i] == ' ')
		{
			c[i + k] = b;
			k += 1;
		}
		c[i + k] = a[i];
	}
	
	printf("%s", c);
	printf("%c\n", b);
}

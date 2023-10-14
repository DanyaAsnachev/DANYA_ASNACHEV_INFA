#include <stdio.h>

int main()
{
	char a[1000], b = '!';
	scanf("%[^\n]", a);

	for (int i = 0; a[i]; i++)
	{
		if (a[i] == ' ')
		{
			a[i] = b;
		}
	}
	
	printf("%s", a);
	printf("%c\n", b);
}
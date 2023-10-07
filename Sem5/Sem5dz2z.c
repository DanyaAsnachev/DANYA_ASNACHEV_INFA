#include <stdio.h>
#include <ctype.h>

int main()
{
	char a;
	int n;
	scanf("%c", &a);
	if ((90 >= a) && ( a >= 65))
	{
		n = a - 65 + 1;
		printf("%i", n);
	}
	else if ( (122 >= a) && (a >= 97))
	{
		n = a - 97+ 1;
		printf("%i", n);
	}
	else
		printf("Not a letter");
}
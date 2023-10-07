#include <stdio.h>
#include <ctype.h>

int main()
{
	char a;
	scanf("%c", &a);
	if (islower(a))
	{
		printf("Lowercase Letter");
	}
	else if (isupper(a))
	{
		printf("Uppercase Letter");
	}
	else if (isdigit(a))
	{
		printf("Digit");
	}
	else
	{
		printf("Other");
	}
}
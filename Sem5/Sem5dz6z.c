#include <stdio.h>

int main()
{
	char a[1000];
	scanf("%[^\n]", a);

	int k = 0;

	for (int i = 0; a[i]; i++)
	{
		if (k >= 0)
		{
			if (a[i] == '(')
			{
				k += 1;
			}
			if (a[i] == ')')
			{
				k -= 1;
			}
		}
		else
		{
			k = -1;
		}
	}

	if (k == 0)
		printf("YES\n");
	
	else
		printf("NO\n");
}
#include <stdio.h>
void print_even(int x, int y)
{
	while (x < y)
	{
		if (x % 2 == 0)
			printf("%i ", x);
		x += 1;
	}
}
int main()
{
	int x, y;
	scanf("%i %i", &x, &y);
	print_even(x, y);
}
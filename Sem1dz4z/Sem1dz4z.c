#include <stdio.h>
#include <limits.h>
int main()
{
	int n, numbers[1000], t_in, t_de, t_e = 0, e_in = 0, e_de = 0, e_e = 0, max_number = 1;
	scanf("%i", &n);
	int min1 = INT_MAX, max2 = INT_MIN, min2 = INT_MAX, max1 = INT_MIN;
	for (int i = 0; i < n; ++i)
	{
		int a;
		scanf("%i", &a);
		numbers[i] = a;

		if (a < min1)
			min1 = a;
		if (a >= max1)
			if ( a == max1)
				max_number += 1;
			max1 = a;

		if ((a % 2 == 0) && (a < min2))
		{
			min2 = a;
		}
		if ((a % 2 != 0) && (a > max2))
		{
			max2 = a;
		}
	}
	for (int i = 0; i < n; ++i)
	{
		if (i == 0)
		{
			t_in = numbers[i];
			t_de = numbers[i];
			t_e = numbers[i];
		}
		else
			if ((numbers[i] - t_in == 1) && (e_in == 0))
			{
				t_in = numbers[i];
			}
			else
				e_in = 1;
			if ((numbers[i] - t_de == -1) && (e_de == 0))
			{
				t_de = numbers[i];
			}
			else
				e_de = 1;
			if ((numbers[i] - t_e == 0) && (e_e == 0))
			{
				t_e = numbers[i];
			}
			else
				e_e = 1;

		}
	if (max2 == INT_MIN)
	{
		printf("Answer 1: Min1 = %i, Answer 2: Min2 = %i, None, Answer 3: Max1 = %i, Max_number = %i, ", min1, min2, max1, max_number);
	}
	if (min2 == INT_MAX)
	{
		printf("Answer 1: Min1 = %i, Answer 2: None, Max2 = %i, Answer 3: Max1 = %i, Max_number = %i, ", min1, max2, max1, max_number);
	}
	else
		printf(" Answer 1: Min1 = %i, Answer 2: Min2 = %i, Max2 = %i, Answer 3: Max1 = %i, Max_number = %i, ", min1, min2, max2, max1, max_number);
	if (e_in == 0)
		printf(" Answer 4: Increacing");
	if (e_de == 0)
		printf(" Answer 4: Decreacing");
	if (e_e == 0)
		printf(" Answer 4: Equal");
	if ((e_in == 1) && (e_de == 1) && (e_e == 1))
		printf(" Answer 4: None");
}
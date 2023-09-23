#include <stdio.h>

#define MAX 100

void assign(int A[MAX][MAX], int B[MAX][MAX], int n)
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			A[i][j] = B[i][j];
			printf("%i ", A[i][j]);
		}
		printf("\n");
	}
}

int main()
{
	int A[MAX][MAX], B[MAX][MAX];
	int n;
	scanf("%i", &n);
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			scanf("%i", &A[i][j]);
		}
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			scanf("%i", &B[i][j]);
		}
	}

	assign(A, B, n);
}

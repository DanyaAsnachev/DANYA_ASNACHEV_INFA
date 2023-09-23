#include <stdio.h>

#define MAX 100

void assign(float A[MAX][MAX], float B[MAX][MAX], int n)
{
	float k;
	printf("A");
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			k = B[i][j];
			A[i][j] = k;
			printf("%i", A[i][j]);
		}
	}
}

int main()
{
	float A[MAX][MAX], B[MAX][MAX];
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
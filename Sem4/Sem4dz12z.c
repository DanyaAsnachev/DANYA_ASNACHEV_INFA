#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void cube(float* p)
{
	p[0] = p[0] * p[0] * p[0];
}

int main()
{
	float numbers[7] = {121.0, 1.13, 17.0, 9.0, 10.0, 33.0, 12.0};
	float* p = &numbers[4];
	cube(p);
	for (int i = 0; i <= 5; i++)
		printf("%f ", numbers[i]);
	printf("\n");
	printf("%f", numbers[4]);
}
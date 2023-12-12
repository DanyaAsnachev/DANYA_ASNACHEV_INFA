#include <stdio.h>

int main()
{
	// 1
	int a1 = 1234;
	int* p1 = &a1;
	// 2
	double a2 = 12.34;
	double* p2 = &a2;
	// 3
	char a3 = ')';
	char* p3 = &a3;
	// 4
	int array[5] = {10, 20, 30, 40, 50};
	int* p4 = &array[0];
	// 5
	char str[20] = "Sapere Aude";
	char* p5 = &str[7];
	printf("%c", *p5);
}
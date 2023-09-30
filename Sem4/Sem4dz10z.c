#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	char ch;
	short sh;
	int in;
	long long LongLong;
	size_t siz_t;
	float fl;
	double doub;
	int* int_star;
	int a[10];
	printf("char %i\n", sizeof(ch));
	printf("short %i\n", sizeof(sh));
	printf("int %i\n", sizeof(in));
	printf("long long %i\n", sizeof(LongLong));
	printf("size_t %i\n", sizeof(siz_t));
	printf("float %i\n", sizeof(fl));
	printf("double %i\n", sizeof(doub));
	printf("int* %i\n", sizeof(int_star));
	printf("int[10] %i\n", sizeof(a));
}
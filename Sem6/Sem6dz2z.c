#include <stdio.h>
#include <ctype.h>

int main()
{
	// 1
	int a1 = 1234;
	int* p1 = &a1;
	*p1 = a1 * 2;
	printf("%i\n", a1);
	// 2
	float a2 = 1.5;
	float* p2 = &a2;
	*p2 = a2 * a2;
	printf("%f\n", a2);
	// 3
	char a3 = 't';
	char* p3 = &a3;
	*p3 = 'T';
	printf("%c\n", a3);
	// 4
	int array[5] = {10, 20, 30, 40, 50};
	int* p4 = &array[0];
	for (int i = 0; i < 5; ++i)
		printf("%i", array[i]);
	printf("\n");
	p4[0] += 1;
	p4[3] += 1;
	for (int i = 0; i < 5; ++i)
	{
		p4[i] += 1;
		printf("%i", array[i]);
	}
	printf("\n");
	int arrayt[5] = {10, 20, 30, 40, 50};
	int* p5 = &arrayt[3];
	for (int i = 0; i < 5; ++i)
		printf("%i", arrayt[i]);
	printf("\n");
	p5[-3] += 1;
	p5[1] += 1;
	for (int i = 0; i < 5; ++i)
	{
		p5[i-3] += 1;
		printf("%i", arrayt[i]);
	}
	printf("\n");
	char str[] = "sapere aude";
	char* p6 = &str[0];
	printf("%s\n", str);
	p6[0] = toupper(p6[0]);
    	p6[7] = toupper(p6[7]);
    	for (int i = 0; i < 11; ++i)
    	{
    		p6[i] = toupper(p6[i]);
    	}
    	printf("%s\n", str);
    	int a7 = 1234;
    	int* p7 = &a7;
    	int** q7= &p7;
    	**q7 = 2 * a7;
    	printf("%i\n", a7);

}

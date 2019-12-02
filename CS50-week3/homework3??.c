#include <stdio.h>

int main(void)
{
	int m = 300;
	float fx = 300.600006;
	char cht[2] = "z";

	printf("\n\tAddress of m = %p\n", &m);
	printf("\tAddress of fx = %p\n", &fx);
	printf("\tAddress of cht = %p\n\n", &cht);

	printf("\tValue of m = %d\n", m);
	printf("\tValue of fx = %f\n", fx);
	printf("\tValue of cht = %s\n", cht);

	int* pt1 = &m;
	float* pt2 = &fx;
	char* pt3 = &cht[2];

	printf("\n\tAddress of m = %p\n", pt1);
	printf("\tAddress of fx = %p\n", pt2);			//??
	printf("\tAddress of cht = %p\n\n", pt3);

	printf("\tValue of m = %d\n", *pt1);
	printf("\tValue of fx = %f\n", *pt2);
	printf("\tValue of cht = %c\n\n", *pt3);		//?
}
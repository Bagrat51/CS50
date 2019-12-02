#include <stdio.h>

int main(void)
{
	int num1, num2, sum;
	int* ptr1, *ptr2;
	printf("Input first nubmer: ");
	scanf("%d", &num1);			//why dont wokr without &?
	printf("Input second nubmer: ");
	scanf("%d", &num2);		

	ptr1 = &num1;
	ptr2 = &num2;

	sum = *ptr1 + *ptr2;

	printf("Sum of %d and %d = %d\n",*ptr1, *ptr2, sum );
}
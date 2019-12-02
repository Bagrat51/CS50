#include <stdio.h>
 
int factorial (int n)
 {
 	if (n == 0)
 	{
 		return 1;
 	}
 	else
 	{
 		return (n * factorial(n - 1));
 	}
 }
 
 int main(void)
 {
 	int num = 8;
 	int fact = factorial(num);
 	printf("Factorial of %d is %d\n", num, fact);
 }
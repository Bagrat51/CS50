#include <stdio.h>
 
int sum_of_digit (int n)
 {
 	if (n == 0)
 	{
 		return 0;
 	}
 	else
 	{
 		return (n % 10 + sum_of_digit(n / 10));
 	}
 }
 
 int main(void)
 {
 	int num = 286;
 	int result = sum_of_digit(num);
 	printf("Sum of digit in %d is %d\n", num, result);
 }
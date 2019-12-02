#include <stdio.h>
#include <stdlib.h>

int lcm (int n, int m) 
{
	if (m == 0 || n == 0) 
	{ 
		return 0;
	} 
	else 
	{ 
		return n * m / 2;
	}
}

int main(void)
{

int num1 = 6;
int num2 = 8;
int result = lcm (num1, num2);
printf ("LCM of %d and %d is %d\n", num1, num2, result););

}
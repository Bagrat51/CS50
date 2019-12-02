#include <stdio.h>

int main(void)
{
	int m = 10,n ,o;
	int* z = &m;

	printf("\tAddress of M: %p\n", z );
	printf("\tValue of M: %i\n", *z );
	printf("\t&m is Address of M: %p\n", &m );
	printf("\t&o is Address of O: %p\n", &o );
	printf("\t&n is Address of N: %p\n", &n );
	printf("\t&z is Address of Z: %p\n", &z );
}
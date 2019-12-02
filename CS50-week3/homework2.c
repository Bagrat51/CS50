#include <stdio.h>

int main(void)
{
	int m = 29;
	printf("\tAddress of m: %p\n", &m );
	printf("\tVolue of m: %d\n", m);

	int* ab = &m;
	printf("\n\tAddress of ab: %p\n", ab );
	printf("\tContent of pointer ab: %d\n", *ab);

	*ab = 7;
	printf("\n\tAddress of ab: %p\n", &ab );
	printf("\tContent of pointer ab: %d\n", *ab);
}
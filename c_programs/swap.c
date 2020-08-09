#include <stdio.h>

int main()
{
	int a = 10, b = 20;

	printf("a : %d b :%d \n", a, b);
#if 0
	a = a + b;
	b = a - b;
	a = a - b;
#else
	printf("Different swap algo \n");
	a = a ^ b;
        b = a ^ b;
	a = a ^ b;
#endif

	printf("a : %d b :%d \n", a, b);

}

#include <stdio.h>
void func();
static int i = 10;
int *ptr = &i;
int main()
{
	printf("P Before:%d \n", i);
	func();
	printf("i After:%d\n", i);
}

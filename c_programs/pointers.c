#include <stdio.h>

int main()
{
	int i = 10;
	int * ptr1 = &i;
        int * ptr2  = &i;
	int *ptr3 = NULL;

	printf("ptr1:%x \n", ptr1);
	printf("ptr2:%x \n", ptr2);
	//printf("ptr1+ptr2 :%x\n", (int*)(ptr1 + ptr2));
	ptr3 = (int *)((int)ptr1 + (int)ptr2);
	printf("ptr3:%x\n", ptr3);
	printf("ptr * 2 :%x\n", (int)ptr1 * 2);
	printf("ptr2-ptr1:%x\n", ptr1-ptr2);
}
	

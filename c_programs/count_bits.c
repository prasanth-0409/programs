#include <stdio.h>
int
count_bits(int num)
{
	if (num == 0 )
		return 0;
	return( ((num%2 == 0)?0:1) + count_bits(num/2));
}

int main()
{
	int num = 0;
	printf("Enter the number:");
	scanf("%d", &num);
	printf("Number of bits:%d\n",count_bits(num));
}


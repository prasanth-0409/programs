#include <stdio.h>
// Increment a number by 1, without using arithmetic operations

int
main()
{
	int num,temp;

	printf("Enter number:");
	scanf("%d", &num);
	temp = 0x1;
	while(1){
		if ( num & temp){
			num = num & (~temp); 
			temp <<=1;
			continue;
		}else{
			num = num | temp;
			break;
		}
	}
	printf("New incr value:%d\n", num);
}

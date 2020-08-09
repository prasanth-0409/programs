#include <stdio.h>
// Decrement a num by 1, without using arithmetic operations

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
			break;
		}else{
			num = num | temp; 
			temp <<=1;
			continue;
		}
	}
	printf("New dcr value:%d\n", num);
}

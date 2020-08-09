#include <stdio.h>
// To check if 2 given numbers are of opposite signs

unsigned char 
opp_signs(int i, int j)
{
	return ( (i ^j ) <0);
}
int
main()
{
	int i = 100, j = -20;

	printf("Enter two numbers :");
	scanf("%d %d\n", &i, &j);
	if (opp_signs(i,j)){
		printf("Numbers are of Opposite signs\n");
	}else{
		printf("Numbers are NOT Opposite signs\n");
	}
}

#include <stdio.h>
int
main()
{
    int n,i=1,sum=0,fact=1;
    printf("Enter the value of n \n");
    scanf("%d",&n);
    while(i<=n)
    {
        sum=sum+i;
	fact=fact*i;
        i=i+1;
    }
    printf("the sum is %d \n",sum);
    printf("the factorial is %d \n",fact);
    
}

#include <stdio.h>
int
main()
{
    int n,i=1,j;
    printf("Enter the value of n \n");
    scanf("%d",&n);
    while(i<=n)

    {
        j=1;
	while(j<=i)
	{
		printf(" *");
		j=j+1;
	}
	printf("\n");
        i=i+1;
    }
}


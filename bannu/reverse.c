#include <stdio.h>
int
main()
{
    int n,i;
    printf("Enter the value of n \n");
    scanf("%d",&n);
    while(n)
    {
        for(i=1;i<=n;)
        {
            printf("*");
            i=i+1;
            
        }
       printf("\n");
       n=n-1;
    }
}

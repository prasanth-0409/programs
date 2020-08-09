#include <stdio.h>

int
main()
{
    int a,b;
    printf("Enter the 2 numbers  \n");
    scanf("%d %d",&a,&b);
    if (a>b)
    {
         printf("The greater number is: %d \n",a);
    }
    else if(b>a)
    {
        printf("the greater number is: %d \n",b);
    }
    else
        printf("both the numbers are equal \n");
}

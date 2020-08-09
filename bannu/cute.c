#include <stdio.h>
int 
main ()
{
   int f,a,sum,prod,sub;
   
   printf("Enter the numbers, remember that the first number should be greater or equal to the second \n");
   scanf("%d %d",&f,&a);
   sum=f+a;
   prod=f*a;
   sub=f-a;
   printf("Addition is %d \n", a+f);
   printf("product is %d \n", prod);
   
   printf("subtraction is %d \n", sub);

}

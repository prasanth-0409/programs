#include  <stdio.h>

int
main()
{
      int a,b,c;
      printf("Enter the three numbers(please enter uneqaul numbers) \n");
      scanf("%d %d %d",&a,&b,&c);
      if(a>b&&a>c)
  {
    printf("The greatest number is:%d \n",a);
  }
      else if(b>a&&b>c)
  {
    printf("The greatest number is:%d \n",b);
  }
      else
    printf("The greatest number is:%d \n",c);
}

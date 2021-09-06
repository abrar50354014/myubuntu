#include <stdio.h>
int main()
{
int a,b;
printf("Enter two numbers:\n");
scanf("%d%d",&a,&b);
#if 1>10
 printf("Sum %d",a+b);
#else
 if(a==b)
  printf("Eqauls");
 else if(a>b)
  printf("Biggest number is %d\n",a);
 else
  printf("Biggest number is %d\n",b);
#endif
return 0;
}

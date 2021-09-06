#include<stdio.h>
void main()
{
   int a=0,b=0,maximum_no=0;
   printf("enter any two integers\n");
   scanf("%d %d", &a,&b);
   maximum_no = (a>b)? a:b;
   printf("maximum no is %d\n", maximum_no);
}

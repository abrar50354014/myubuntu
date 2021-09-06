#include<stdio.h>
void main()
{
  int a,b,i,n,result;
  printf("enter number of terms: ");
  scanf("%d",&n);
  a=0;
  b=1;
  for(i=1;i<=n;i++)
   {
     printf("%d ",a);
     result = a+b;
     a = b;
     b = result;
   }
  
}

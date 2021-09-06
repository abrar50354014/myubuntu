#include<stdio.h>
int n,k,res=0,rem=0;
int main()
{
 printf("enter the no: ");
 scanf("%d",&n);
 
k=n;

while (k!=0)
{
  rem=k%10;
  res=res+rem;
  k=k/10;
}
  printf("sum of digits: %d\n", res);
  
}

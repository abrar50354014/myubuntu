#include<stdio.h>
void main()
{
  int n=0,count=0,r=1;
  printf("enter `the number: \n");
  scanf("%d",&n);
  for(int i=1;i<=n;i++)
  
  {
    r=n%i;
    if(r==0)
    count++;
  }
  
  if(count==2)
  printf("number is prime\n");
  else
  printf("number is not prime\n");
  
}


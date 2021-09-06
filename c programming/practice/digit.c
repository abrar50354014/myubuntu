#include<stdio.h>
int rem=0,i,n,k;
void main()
{
  printf("enter the number: ");
  scanf("%d",&n);
  k=n;
  int count = 0;
  while(k!=0)
  {
    k=k/10;
    count++;
    
  }
  
  printf("no of digits: %d\n",count);
  

}

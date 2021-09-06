#include<stdio.h>
int n,k,large=0,rem=0;
void main()
{
  printf("enter the no: ");
  scanf("%d", &n);
  k=n;
  
  while(k>0)
  {
    rem = k%10;
    if(rem>large)
     large=rem;
     k=k/10;
  }
   printf("largest digit is: %d\n", large);
  
  }

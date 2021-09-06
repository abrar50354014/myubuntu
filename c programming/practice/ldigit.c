#include<stdio.h>
int n,k,large=0,rem=0,sec_largest=0;
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
  
  k=n;
  large=0;
  rem=0;
   while(k>0)
   {
     rem = k%10;
     if(large<rem)
      {
       sec_largest=large;
       large=rem;
      }
     else if(rem>=sec_largest)
       sec_largest=rem;
     k=k/10;
  }
   printf("2ndlargest digit is: %d\n", sec_largest);
   
}

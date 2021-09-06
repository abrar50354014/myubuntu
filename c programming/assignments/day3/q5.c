#include<stdio.h>
void main()
{
  int n,rem,result = 0,q;
  printf("enter the number: \n");
  scanf("%d", &n);
  q = n;
  while(q!= 0)
  {
     rem = q%10;
     result = result*10+rem;
     q = q/10;
  }
     if(result == n)
     printf("the no is palindrome\n"); 
     else
       printf("the no is not palindrome\n");
}

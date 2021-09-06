#include<stdio.h>
void main()
{
  int n,q,result=0,fact = 1,rem,i;
  printf("enter the number: \n");
  scanf("%d", &n);
  q = n;
  while(q!=0)
  {
    rem = q%10;
    for(i=1;i<=rem;i++)
      {
        fact = fact*i;
      }
    result = result+fact;
    fact = 1;
    q=q/10;
  } 
  
  if(result == n)
    printf("%d is a strong number\n",n);
  else
    printf("%d is not a strong number\n)",n);
}

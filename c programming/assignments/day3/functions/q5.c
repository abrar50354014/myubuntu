#include<stdio.h>
int sum=0,rem;
int reverse_function(int num)
{
   if(num)
   {
      rem=num%10;
      sum=sum*10+rem;
      reverse_function(num/10);
   }
   else
      return sum;
   return sum;
}

void main()
{
   int num,reverse_number;

   printf("\nEnter any number:");
   scanf("%d",&num);

   reverse_number=reverse_function(num);
   printf("After reverse the no is :%d\n",reverse_number);
   
}


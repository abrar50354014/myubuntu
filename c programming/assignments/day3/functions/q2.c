#include<stdio.h>
int gcd(int a, int b);

void main()
{
  int num1, num2;

  printf("Enter two numbers : ");
  scanf("%d %d",&num1, &num2);

  int result = gcd(num1, num2);
  printf("The GCD of %d and %d = %d\n", num1, num2, result);
}


int gcd(int a, int b)
{
  int hcf;
  for(int i=1; i<=a && i<=b; i++)
  {
    if(a%i==0 && b%i==0)
    {
      hcf = i;
    }
  }
  return hcf;
}

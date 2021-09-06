#include<stdio.h>
int factorial(int);
void main() 
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("Factorial of %d = %d\n", n, factorial(n));
}

int factorial(int n) 
{
    if (n>=1)
        return n*factorial(n-1);
    else
        return 1;
}


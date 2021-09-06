#include<stdio.h>
void Swap(int *a, int *b) 
{
   int c ;
   c= *a;
   *a = *b;
   *b = c;
 }  
 
 
void main() 
{
   int x, y;
   printf("enter Value of x : ");
   scanf("%d",&x);
   printf("\n enter Value of y : ");
   scanf("%d",&y);
   Swap(&x, &y);
   printf("\nAfter swapping, the values are: x = %d, y = %d\n", x, y);
}

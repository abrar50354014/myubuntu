#include<stdio.h>
void main()
{
  int a;
  a= 10;
  int *ptr;      
  ptr = &a;
  printf("value of the int var using pointer var is: %d'\n",*ptr);
  }     

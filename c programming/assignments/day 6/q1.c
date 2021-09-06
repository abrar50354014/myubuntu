#include<stdio.h>
void main()
{
  int i = 4;
  char ch = 'A';
  double d = 4244.546;
  float f = 10.327;
  printf("the address of integer %d is: %u\n hex address is %p\n", i,&i,&i);
  printf("the address of character %c is: %u\n hex address is %p\n", ch,&ch,&ch);
  printf("the address of double %lf is: %u\n hex address is %p\n", d,&d,&d);
  printf("the address of float %f is: %u\n hex address is %p\n", f,&f,&f);
  
 }

#include<stdio.h>
#include <stdlib.h>
void main()
{
  int i= 8, j = 5;
  float x = 0.005, y = 0.01;
  char c = 'c';
  char d = 'd';
  int s1=0,s2=0,s3=0,s4=0,s5=0;
  s1 = (3*i*j)%(2*d); 
  s2 = ((i*j)%(c+2*d) / (x*y));
  s3 = 5 * (i + j) > 'c';
  s4 = 2*x+ (y== 0);
  s5 = (x > y) && (i > 0) || (j < 5);
  printf("s1 = %d\n", s1);
  printf("s2 = %d\n", s2);
  printf("s3 = %d\n", s3);
  printf("s4 = %d\n", s4);
  printf("s5 = %d\n", s5);
    
}

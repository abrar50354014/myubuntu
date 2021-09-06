#include<stdio.h>
void main()
{
  int x,y;
  printf("enter two no's to add: \n");
  scanf("%d %d", &x, &y);
  while(y!=0)
  {
    x++;
    y--;
  }
  printf(" sum of two given no's is: %d\n", x);
}

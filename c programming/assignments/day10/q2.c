#include <stdio.h>
//#define INTEGER  1
//#define FLOAT 2
int main()
{
int a,b;
int c,d;

#if NUM == INTEGER
{  
int sum;
printf("Enter two integers:\n");
scanf("%d",&a);
scanf("%d",&b);
sum = a+b;
printf("Sum of integers is:%d\n",sum);
}

#elif NUM == FLOAT
{
int sum;
printf("Enter two float no's:\n");
scanf("%d",&c);
scanf("%d",&d);
sum = c+d;
printf("Sum of float no's is:%f\n",sum);
}
#endif
return 0;
}

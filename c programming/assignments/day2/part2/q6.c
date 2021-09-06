#include<stdio.h>
void main()
{
	int start, end;
	printf("enter the range of numbers :\n");
	scanf("%d", &start);
	scanf("%d", &end);
	int i, sum = 0;
	for(i = start; i <= end; i++)
	{
		sum = sum + i;
	}
	printf("sum of given range of numbers = %d\n",sum);
}

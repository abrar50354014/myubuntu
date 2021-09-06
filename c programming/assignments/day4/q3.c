#include<stdio.h>

int main()
{
	int Arr[5] = {12,21,33,40,55};
	int i;

	for(i=0;i<5;i++)
	{
	
		printf("Address for %d is %d \n",Arr[i],&Arr[i]);
	}
}

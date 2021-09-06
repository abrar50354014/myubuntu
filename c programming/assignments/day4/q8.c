#include<stdio.h>

int main()
{
	int Arr[2][3] = {{12,21,33},{4,9,8}};
	int i,j;

	for(i=0;i<2;i++)
	{
	  for(j=0;j<3;j++)
	    {
	
		printf("Address for %d is %d \n",Arr[i][j],&Arr[i][j]);
	    }
        }
}

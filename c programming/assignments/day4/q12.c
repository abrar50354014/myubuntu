#include<stdio.h>

int main()
{
	int Arr[2][2][3] = {
	                    {{3,6,9},{4,9,8}},
	                    {{1,2,3},{4,5,6}}
	                    };
	int i,j,k;

	for(i=0;i<2;i++)
	{
	  for(j=0;j<2;j++)
	    {
	       for(k=0;k<3;k++)
	       { 
		printf("Address for %d is %d \n",Arr[i][j][k],&Arr[i][j][k]);
	       }
            }
       }
}

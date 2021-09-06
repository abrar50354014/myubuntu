#include<stdio.h>
int main()
{
  int i,size;
  printf("enter size of array: ");
  scanf("%d",&size);
  int arr[size];
  printf("\n Enter %d elements of  the array: \n", size);
  for(i = 0; i < size; i++)
    {
	scanf("%d",&arr[i]);
	
    }
    printf("Orginal order is: \n");
    for(i = 0; i < size; i++)
    {
	printf("%d\n",arr[i]);
	
    }
  printf("\n");
  
  printf("Reversed array is: \n");
  for(i = size-1; i >= 0; i--)
    {
	printf("%d\n", arr[i]);
    }
  return 0;
}

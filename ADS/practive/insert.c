#include<stdio.h>
int main()
{
  int i,n,j,temp;
  int arr[100];
  printf("enter size of array: ");
  scanf("%d", &n);
  printf("enter the elements of array: ");
  for (i=0;i<n;i++)
  scanf("%d", &arr[i]);
  
  //insert sort
  for(i=1 ; i<=n-1 ; i++)
  {
    j=i;
      while(j>0 && arr[j-1]>arr[j])
      { 
         temp=arr[j];
         arr[j]=arr[j-1];
         arr[j-1]=temp;
         j--;
      }
  
  }
  
  printf("sorted array :");
  for (i=0;i<n;i++)
  printf("%d ", arr[i]);
  return 0;
}


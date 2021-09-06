#include<stdio.h>
int main()
{
  int i,j,n,swap;
  int arr[100];
  printf("enter the size of array: ");
  scanf("%d", &n);
  printf("enter elements of array: ");
  for(i=0 ; i<n ;i++)
  scanf("%d", &arr[i]);
  //bubble sort
  for(i=0 ; i<n-1 ; i++)
  {
    for(j=0 ; j<n-i-1 ;j++)
    {
      if(arr[j]>arr[j+1])
      {
        swap=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=swap;
      }
    }
    
   } 
  printf("bubble sorted array: ");
  for(i=0;i<n;i++)
  printf("%d",arr[i]);
  return 0;
}

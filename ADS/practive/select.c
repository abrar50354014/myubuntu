#include<stdio.h>
int main()
{
  int i,j,n,pos,swap;
  int arr[100];
  printf("entersize of array: ");
  scanf("%d",&n);
  
  printf("enter ellements of array: ");
  for (i=0;i<n;i++)
  scanf("%d",&arr[i]);
  
  //select sort
  for(i=0 ; i<n-1 ; i++)
  {
    pos=i;
    for(j=i+1; j<n ;j++)
    {
      if(arr[pos]>arr[j])
      pos=j;
    }
    
    if(pos!=i)
    {
      swap = arr[i];
      arr[i]=arr[pos];
      arr[pos]=swap;
     } 
    } 
 printf("sorted array is: ");
  for(i=0 ; i<n ; i++)
  printf("%d ",arr[i]);
  
  
  return 0;
}

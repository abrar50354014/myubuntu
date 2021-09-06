#include <stdio.h>
#include <stdlib.h>
int main()
{

   int randArray[1000],i;
   for(i=0;i<1000;i++)
     randArray[i]=rand()%1000;   //Generate number between 0 to 999
   printf("Elements of the array::\n");
   for(i=0;i<1000;i++)
     {  
       printf("%d\n",randArray[i]);
     }
   
   
 //slection sort
 printf("\nselection sorting of random no's: \n");
 int j,position,swap;
  for(i = 0; i < 1000 - 1; i++)
    {
      position=i;
    for(j = i + 1; j < 1000; j++)
      {
        if(randArray[position] > randArray[j])
        position=j;
      }
    if(position != i)
      {
        swap=randArray[i];
        randArray[i]=randArray[position];
        randArray[position]=swap;
      }
  }
  //printf("Sorted Array(selection sort): \n");
  for(i = 0; i < 1000; i++)
  
    printf("%d\n", randArray[i]);
    
    
//insertion sort
 printf("\ninsertion sorting of random no's: \n");
 int temp;
 for (i = 1 ; i <= 1000 - 1; i++)
    {
	    j = i;
            while ( j > 0 && randArray[j-1] > randArray[j])
            {	        
                temp     = randArray[j];
                randArray[j]   = randArray[j-1];
                randArray[j-1] = temp;
                j--;
            }
    }
    //printf("Sorted Array(insertion) is: \n");
    for (i = 0; i <= 1000 - 1; i++)
    {
        printf("%d\n", randArray[i]);
    }
    
   return 0;
}

    

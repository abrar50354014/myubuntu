#include <stdio.h>
    void main()
    {
 
        int i, j, a, size, arr[30];
        printf("Enter the sizeof array: ");
        scanf("%d", &size);
 
        printf("Enter the elements of array \n");
        for (i = 0; i < size; ++i)
            scanf("%d", &arr[i]);
 
        for (i = 0; i < size; ++i) 
        {
 
            for (j = i + 1; j < size; ++j)
            {
 
                if (arr[i] > arr[j]) 
                {
 
                    a =  arr[i];
                    arr[i] = arr[j];
                    arr[j] = a;
 
                }
 
            }
 
        }
 
        printf("The numbers sorted in ascending order are given below \n");
        for (i = 0; i < size; ++i)
            printf("%d\n", arr[i]);
 
    }

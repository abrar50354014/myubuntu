
// C program for finding the largest integer using cmd
#include<stdio.h>
  
// Taking argument as command line
int main(int argc, char *argv[]) 
{
    int a, b, c, d, e;
  
    // Checking if number of argument is
    // equal to 6 or not.
    if (argc < 6 || argc > 7) 
    {
        printf("enter 6 arguments only eg.\"filename arg1 arg2 arg3 arg4 arg5!!\"");
        return 0;
    }
  
    // Converting string type to integer type
    // using function "atoi( argument)" 
    a = atoi(argv[1]); 
    b = atoi(argv[2]);
    c = atoi(argv[3]);
    d = atoi(argv[4]);
    e = atoi(argv[5]);
  
    // Checking if all the numbers are positive of not
    if (a < 0 || b < 0 || c < 0 || d < 0 || e < 0) 
    {
        printf("enter only positive values in arguments !!");
        return 1;
    }
  
    // Checking if all the numbers are different or not
    if (!(a != b && b != c && a != c && a != d && a !=e && a != c && b != d && b != e &&  c != d &&c != e)) 
    {
        printf("please enter three different value ");
        return 1;
    }
    else
    {
        // Checking condition for "a" to be largest
        if (a > b && a > c && a > d && a > e)             
            printf("%d is largest", a);
  
        // Checking condition for "b" to be largest    
        else if (b > c && b > a && b > d && b > e) 
            printf ("%d is largest", b);
  
        // Checking condition for "c" to be largest
        else if (c > a && c > b && c > d && c > e ) 
            printf("%d is largest ",c);
        // Checking condition for "c" to be largest
        else if (d > a && d > b && d > c && d > e )
            printf("%d is largest ",d);
        // Checking condition for "c" to be largest
        else if (e > a && e > b && e > c && e > d )
            printf("%d is largest ",e);
    }
    return 0;
    }


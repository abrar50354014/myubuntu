#include <stdio.h>

void main()
{
    int i, n, sum=0;
    printf("Enter upper limit: ");
    scanf("%d", &n);
    i=1;
    while(i<=n)
    {
        sum += i;
        i+=2;
    }

    printf("Sum of odd numbers = %d\n", sum);
}

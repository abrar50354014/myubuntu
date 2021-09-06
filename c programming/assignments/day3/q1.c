#include <stdio.h>
void main() {
    int n, i, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if(i%5 == 0)
        continue;
        sum =sum + i;
    }

    printf("Sum = %d\n", sum);
}

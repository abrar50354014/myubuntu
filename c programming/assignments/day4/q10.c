#include <stdio.h>
#define MAX 100
int main() {
  int r, c, a[MAX][MAX], b[MAX][MAX], sum[MAX][MAX], i, j;
  printf("Enter the number of rows: ");
  scanf("%d", &r);
  printf("Enter the number of columns: ");
  scanf("%d", &c);

  printf("\nEnter elements of 'a' matrix:\n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) 
    {
      scanf("%d", &a[i][j]);
    }

  printf("Enter elements of 'b' matrix:\n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) 
    {
      scanf("%d", &b[i][j]);
    }

  // adding two matrices
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) 
      {
        sum[i][j] = a[i][j] + b[i][j];
      }

  // printing the result
  printf("\nSum of two matrices: \n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) 
      {
        printf("%d   ", sum[i][j]);
      }
    

  return 0;
}

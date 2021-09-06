#include <stdio.h>
#include <string.h>

int main()
{
  char Src[15]= "Abrar";
  char Dest[15] = "";
  printf("Before copying\n");
  printf("Source string: %s \n", Src);
  printf("Destination string: %s \n\n", Dest);
  
  strcpy(Dest, Src);   // calling strcpy function
  printf("After copying\n");
  printf("Source string: %s \n", Src);
  printf("Destination string: %s \n", Dest);

  return 0;
}

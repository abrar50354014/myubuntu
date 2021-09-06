#include <stdio.h>
#define MAX
int main()
{
#ifdef MAX
 printf("MAX is defined\n");
#else
 printf("Max is not defined\n");
#endif

#ifndef MIN
 printf("MIN is not defined\n");
#else
 printf("MIN is defined\n");
#endif
return 0;
}

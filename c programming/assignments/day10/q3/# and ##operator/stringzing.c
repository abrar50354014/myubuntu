#include <stdio.h>

// Macro definition with stringize operator
#define PRINT(msg) #msg

int main()
{
	printf(PRINT(Abrar Ahmed\n));
	
	return 0;
}

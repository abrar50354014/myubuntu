#include <stdio.h>

// Macro definition with token pasting
#define CONCAT(a, b) a##b

int main()
{
	printf("CONCAT(20, 21) = %d\n", CONCAT(20, 21));
	
	return 0;
}

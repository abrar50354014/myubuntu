#include <stdio.h>
#include <stdarg.h>

double average(int num,...) {

   va_list valist;
   double sum = 0.0;
   int i;

   // initialize valist for num number of arguments //
   va_start(valist, num);

   // access all the arguments assigned to valist //
   for (i = 0; i < num; i++) {
      sum += va_arg(valist, int);
   }
	
   // clean memory reserved for valist //
   va_end(valist);

   return sum/num;
}

int main() {
   printf("Average of 5, 6, 7, 8 = %f\n", average(4, 5,6,7,8));
   printf("Average of 8, 9, 10, 11 = %f\n", average(4, 8,9,10,11));
}

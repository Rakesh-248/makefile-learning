#include <stdio.h>
#include "add.h"

int main()
{
   int i = 10;
   int j = 15;
   int res = 0;

   res = add(i, j);
   printf("\nThe result is %d\n", res);
   return 0;
}

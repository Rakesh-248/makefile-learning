#include <stdio.h>
#include "add.h"
#include "subtract.h"

int main()
{
   int i = 0;
   int j = 0;
   int res = 0;

   i = 90;
   j = 9;

   res = add(i, j);
   printf("\nAddition of %d and %d is %d", i, j, res);

   res = subtract(i , j);
   printf("\nSubtraction of %d and %d is %d", i, j, res);

   return 0;
}

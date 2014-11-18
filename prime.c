#include <stdio.h>
#include <math.h>

int main()
{
   int i, j, k, cnt = 0;
   for (i = 2; i < 2000; i++) {
      k = sqrt(i);
      for (j = 2; j <= k; j++)
         if (i % j == 0)
            break;
      if (j == k + 1) {
         printf("%-5d",i);
         cnt++;
         if (cnt % 8 == 0)
            putchar('\n');
      }
   }
   return 0;
 }

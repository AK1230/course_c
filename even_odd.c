#include <stdio.h>
#define MAX_ITER 10000
int main()
{
   int i, x, cnt;
   for (i = 2; i < 1000000; i++)  {
      cnt = 0;
      x = i;
      while (x != 1) {
         if (x % 2 == 0) x /= 2;
         else            x = x * 3 + 1;
         cnt++;
         if (cnt > MAX_ITER)
            break;
      
      }
      printf("Number %d iterated %d times to reduce to 1\n", i, cnt);
   }
      

   return 0;
}

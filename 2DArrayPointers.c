#include <stdio.h>
int main()
{
   int a[2][4] = {{1,2,3,4}, {5,6,7,8}};
   int (*p)[4], i, j;
   p = a;

   for (i = 0; i < 2; i++)
      for (j = 0; j < 4; j++)
         printf("%4d", p[i][j]);
   return 0;
}

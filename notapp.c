#include <stdio.h>
int main()
{
   int a = 2, b;
   b = !a++;
   printf("%d\n", b);
   return 0;
}

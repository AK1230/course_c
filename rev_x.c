#include <stdio.h>
#include <math.h>
int rev(int x);
int rev2(int x);

int main()
{
   int x = 121, y;
   int i;
   
   y = rev(x);
   if (x == y) puts("yes");
   else        puts("no");
  
   
   if (rev2(x))  puts("yes");
   else          puts("no");

   for (i = 1; i <= 100000; i++)
      if (rev2(i))
         printf("%d ", i);
   
   
   return 0;
}

int rev(int x)
{
   int rst = 0;
   while (x != 0) {
      rst = rst * 10 + x % 10;
      x = x / 10;
   }
   return rst;
}

// while calling this function:
// the number x should not contain digit 0!! 
int rev2(int x)
{
   int h, t, y;

   if (x < 10) return 1;
   else if (x < 100) return x/10 == x%10;
   else{
      y = (int) log10(x) ;
      h = x / (int)pow(10, y);
      t = x % 10;
      x = x % (int)(pow(10, y));
      x = x / 10;
      return (h == t) && rev2(x);
   }
}

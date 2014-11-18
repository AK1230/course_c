#include<stdio.h>
int gcd(int m, int n);
int lcm(int m, int n);
int gcd2(int m, int n);
int lcm2(int m, int n);
int main()
{
   int m, n, x, y;
   scanf("%d%d", &m, &n);

   x = gcd(m, n);
   y = lcm(m, n);
   puts("tests for loop version gcd");
   puts("--------------------------");   
   printf("m= %d n= %d gcd=%d lcm=%d\n", m, n, x, y);
   putchar('\n');
   
   x = gcd2(m, n);
   y = lcm2(m, n);

   puts("tests for recurrsive version gcd");
   puts("--------------------------------");
   printf("m= %d n= %d gcd=%d lcm=%d\n", m, n, x, y);

   return 0;
}

int gcd(int m, int n)
{
   int r;
   r = m % n;
   while (r != 0) {
      m = n;
      n = r;
      r = m % n;
   }
   return n;
}

int lcm(int m, int n)
{
   return m * n / gcd(m, n);
}

int gcd2(int m, int n)
{
   if (n == 0) return m;
   else return gcd2(n, m % n);
}

int lcm2(int m, int n)
{
   return m * n / gcd2(m, n);
}

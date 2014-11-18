#include <stdio.h>
void Fib2(int a[], int n);
void PrintArr(int a[], int n);
int main()
{
   int a[10];
   Fib2(a, 10);
   PrintArr(a, 10);
   return 0;
}

void PrintArr(int a[], int n)
{
   int i;
   for (i = 0; i < n; i++)
      printf("%d ", a[i]);
   putchar('\n');
}

void Fib2(int a[], int n)
{
   if (n == 1) a[0] = 1;
   else if (n == 2) a[0] = a[1] = 1;
   else {
      Fib2(a, n - 1);
      a[n - 1] = a[n - 2] + a[n - 3];
   }
}

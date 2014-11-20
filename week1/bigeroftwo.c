#include<stdio.h>
int main()
{
  int a, b, max;

  scanf("%d%d", &a, &b);
  if( a > b )
    max = a;
  else
    max = b;

  printf("Bigger one is: %d\n", max);
  return 0;
}

#include<stdio.h>
union u{
  int a;
  double b;
};

int main()
{
  union u u1;
  u1.b = 3.14;
  printf("%lf\n", u1.b);
  u1.a = 3;
  printf("%d\n", u1.a);
  printf("%d\n", u1.b);
  return 0;
}

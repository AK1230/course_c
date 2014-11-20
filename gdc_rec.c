#include<stdio.h>

int gcd( int m, int n );
int NChooseK_Plain(int n, int k);
int Fact(int n);
int NChooseK_Loop_Better(int n, int k);
int NChooseK_Rec( int n, int k );

int main()
{
  printf("%d\n", NChooseK_Plain(15,2) );
  printf("%d\n", NChooseK_Loop_Better(15,2) );
  printf("%d\n", NChooseK_Rec(15,2) );
  return 0;
}

int gcd( int m, int n )
{
  if( n == 0 )
    return m;
  else
    return gcd(n, m%n);
}

int NChooseK_Plain(int n, int k)
{
  int fac_n, fac_k, fac_n_k;
  int i;
  fac_n = fac_k = fac_n_k = 1;
  for( i=1; i<=n; i++ )
    fac_n *= i;
  for( i=1; i<=k; i++ )
    fac_k *= i;
  for( i=1; i<=n-k; i++ )
    fac_n_k *= i;

  return fac_n/(fac_k * fac_n_k);
}

int NChooseK_Loop_Better(int n, int k)
{
  return Fact(n)/( Fact(k) * Fact(n-k));
}

int Fact(int n)
{
  int s=1,i;
  for( i=1;i<=n;i++ )
    s *= i;
  return s;
}


int NChooseK_Rec( int n, int k )
{

  /*
    0  1  2  3  4  5  6  7  8  9   k
 0  1  
 1  1  1  
 2  1  2  1
 3  1  3  3  1
 4  1  4  6  4  1
 5  1  
 6
 7
 8
 9

 n

  */

  if( k == 0 )
    return 1;
  else if( k == n )
    return 1;
  else
    return NChooseK_Rec(n-1,k) + NChooseK_Rec(n-1,k-1);
}

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void Print2DArr(int *a, int n, int m)
{
   int i, j;
   for (i = 0; i < n; i++) {
      for (j = 0; j < m; j++)
         printf("%-5d", *(a + i * m + j));
      putchar('\n');
   }
   putchar('\n');
}


void PrintArr( int a[], int n )
{
  int i;
  for( i=0; i<n; i++ )
    printf("%d ", a[i]);
  putchar('\n');
}

void Swap( int *p, int *q )
{
  int t;
  t = *p;
  *p = *q;
  *q = t;
}

// setSeed is indicator of the use of srand function
int RandInt( int a, int setSeed )
{
  if( setSeed )    // false random number or not 
    srand(time(NULL));
  return rand()%a;
}

//note: p is the index of the first array element
//      r is the index of the last array element
int Partation( int a[], int p, int r )
{
  int piv = a[r];
  int i,j;
  i = p - 1;
  for( j=p; j<r; j++ ){
    if( a[j] < piv ){
      i++;
      Swap( &a[i], &a[j] );
    }
  }
  Swap( &a[i+1], &a[r] );
  return i+1;
    
}

//note: p is the index of the first array element
//      r is the index of the last array element
int RandomPartation( int a[], int p, int r, int isFakeRnd )
{
  int i = p + RandInt( r - p + 1, isFakeRnd );
   Swap( &a[i], &a[r] );
  return Partation( a, p, r );
}


//note: p is the index of the first array element
//      r is the index of the last array element
void RandomQuickSort( int a[], int p, int r )
{
  if( r - p > 0 ){
    int m = RandomPartation( a, p, r, 1 );
    RandomQuickSort( a, p, m-1 );
    RandomQuickSort( a, m+1, r );
  }
}


// select the kth element in array a with lenth n,
// k starts at 1 not 0!!
int RandomSelection( int a[], int n, int k )
{
  int m = RandomPartation( a, 0, n-1, 1 );
  if( m + 1 == k )     return a[m];
  else if( m + 1 > k ) return RandomSelection( a, m, k );
  else                 return RandomSelection( a+m+1, n-m-1, k-m-1 );
}

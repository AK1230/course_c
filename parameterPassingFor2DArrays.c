#include<stdio.h>
void Print2DArr(int a[][2], int m, int n);
int main()
{
  int a[3][2]={{1,2},{3,4},{5,6}};
  Print2DArr(a,3,2);
  return 0;
}

void Print2DArr(int a[][2], int m, int n)
{
  int i,j;
  for( i=0; i<m; i++ ){
    for( j=0; j<n; j++ )
      printf("%d ",a[i][j]);
    putchar('\n');
  }
}

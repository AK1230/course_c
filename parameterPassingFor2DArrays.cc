//实验证明王晓东的第四版计算机算法与设计一书中采用的二级指针传递2D数组的做法是错误的。
#include<stdio.h>
void Print2DArr(int **a, int m, int n);
int main()
{
  int a[3][2]={{1,2},{3,4},{5,6}};
  Print2DArr(a,3,2);
  return 0;
}

void Print2DArr(int **a, int m, int n)
{
  int i,j;
  for( i=0; i<m; i++ ){
    for( j=0; j<n; j++ )
      printf("%d ",a[i][j]);
    putchar('\n');
  }
}

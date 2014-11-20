#include<stdio.h>
#define N 100
void BubbleSort( int a[], int n );
void PrintArr( int a[], int n );
int ReadFileToArray( char filename[30], int a[], int n );
void ArrayWriteToFile( char filename[3], int a[], int size );
int main()
{    
  int a[N], size;
  size = ReadFileToArray( "input.txt", a, N );
  
  BubbleSort( a, size );

  ArrayWriteToFile( "out.txt", a, size );
  
  //PrintArr( a, size );

  return 0;
}

void BubbleSort( int a[], int n )
{
  
  int i,j,k;
  for(i=0;i<n-1;i++)
    for(j=0;j<n-1-i;j++)
      if( a[j] > a[j+1] ){
	k = a[j];
	a[j] = a[j+1];
	a[j+1] = k;
      }}
	
void PrintArr( int a[], int n )
{
  int i;
  for( i=0; i<n; i++ )
    printf("%d ", a[i]);

  putchar('\n');
}

int ReadFileToArray( char filename[30], int a[], int n )
{
  int i;
  FILE *fp;
  fp = fopen( filename, "r" );

  i = 0;
  while( i<n && fscanf( fp, "%d", &a[i] ) != EOF )
    i++;
  fclose(fp);
  return i;
}

void ArrayWriteToFile( char filename[30], int a[], int size )
{
  int i;
  FILE *fp;
  fp = fopen( filename, "w" );
  for( i=0; i<size; i++ )
    fprintf(fp, "%d\n", a[i] );
  fclose(fp);
}

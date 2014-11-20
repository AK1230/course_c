#include<stdio.h>
int main()
{
  char c;
  FILE *fp;

  fp = fopen("in.txt", "r");

  while( 1 ){
    c = fgetc(fp);
    if( c != EOF )  
      putchar(c);
    else
      break;
  }
  return 0;
}

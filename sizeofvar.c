
#include<stdio.h>
int main()
{
  int a, *p;
  p = &a;
	printf("The size of int on 64bit system is: %d\n",  sizeof(int));
	printf("The size of short on 64bit system is: %d\n", sizeof(short));
	printf("The size of long on 64bit system is: %d\n", sizeof(long));
	printf("The size of float on 64bit system is: %d\n", sizeof(float));
	printf("The size of double on 64bit system is: %d\n", sizeof(double));
        printf("The size of long double on 64bit system is: %d\n", sizeof(long double));
	printf("The size of char on 64bit system is: %d\n", sizeof(char));
	printf("The size of int * on 64bit system is: %d\n", sizeof(int*));
	printf("The address of int a is: %p\n", p);
	return 0;
}


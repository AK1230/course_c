#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define M 100000
int main()
{
   int tests[M][3] = {0};
   int notChange[M] = {0}, change[M] = {0};
   int i, rnd_choice, sum_not_change=0, sum_change=0;
   srand(time(NULL));
   for (i = 0; i < M; i++)
      tests[i][rand()%3] = 1;

   // swap
   for (i = 0; i < M; i++) {
      rnd_choice = rand() % 3;   
      if (tests[i][rnd_choice] == 0)//hosts has two choice
         change[i] = 1;
   }
   // not swap
   for (i = 0; i < M; i++) {
      rnd_choice = rand() % 3;   
      if (tests[i][rnd_choice] == 1)//hosts has two choice
         notChange[i] = 1;
   }

   for (i = 0; i < M; i++) {
      sum_not_change += notChange[i];
      sum_change += change[i];
   }
   printf("notchange:%d\nchange:%d\n", sum_not_change, sum_change);
   return 0;
}

   

   

   
         
         
         
         

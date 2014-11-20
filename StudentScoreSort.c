#include<stdio.h>

typedef Student{
  char name[30];
  int id;
  int score[3];
  float avg
    }STU;

void SortByScore( STU s[], int n );

int main()
{
  FILE *fp;
  STU s[30], t;
  int i;
  //input students info and calculate the average score
  for( i=0; i<30; i++ ){
    scanf("%s%d%d%d%d", s[i].name, &s[i].id, &s[i].score[0], &s[i].score[1], &s[i].score[2] );
    s[i].avg = (s[i].score[0] + s[i].score[1] + s[i].score[2])/ 3.0;
  }

  //Out put the student info
  for( i=0;i<30;i++ )
    printf("%s %d %d %d %d %f\n", s[i].name, s[i].id, s[i].score[0], s[i].score[1], s[i].score[2], s[i].avg);

  //Sort the students by their average score
  SortByScore( s, 30 );

  //File processing step two: open file safely
  if( (fp = fopen("c:\\stu.txt", "w")) == NULL )
    exit(10);

  //File processing step three: Write array s into file stu.txt
  for( i=0; i<30; i++ )
    fprintf( fp,"%s %d %d %d %d %f\n", s[i].name, s[i].id, s[i].score[0], s[i].score[1], s[i].score[2], s[i].avg );

  //File processing step four: close the opened file
  fclose( fp );
  
  return 0;
}

void SortByScore( STU s[], int n )
{
  int i,j;
  STU t;
  for( i=0; i<n-1; i++ )
    for( j=0; j<n-i-1; j++)
      if( s[j] > a[j-1] ){
	t = s[j];
	s[j] = s[j-1];
	s[j-1] = t;
      }
}

			   

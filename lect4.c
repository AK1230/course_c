/*#include<stdio.h>
int main()
{
    int a,b,c,t;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b){
        t =a ;
        a = b;
        b = t;
    }

    if(c<a){
        t =a ;
        a = c;
        c = t;
    }

    if(c<b) {
        t = c;
        c = b;
        b = t;
    }

    printf("%d %d %d\n",a,b,c);
    return 0;
}
*/


/*
#include<stdio.h>
int main()
{
    int score;
    char level;

    scanf("%d",&score);
    if(score >=0 && score <=100)
    {
        if(score<=100 && score >= 90)
            level = 'A';
        else if(score< 90 && score >= 80)
            level = 'B';
        else if(score< 80 && score >= 70)
            level = 'C';
        else if(score< 70 && score >= 60)
            level = 'D';
        else
            level = 'E';
        printf("%d----->%c",score,level);
    }
    else
    {
        printf("请输入0到100之间的整数！！！\n");
    }
    return 0;
}

*/

/*
#include<stdio.h>
int main()
{
    int score;
    char level;

    scanf("%d",&score);
    switch(score/10)
    {
        //case 0 :
        //case 1 :
        //case 2 :
        //case 3 :
        //case 4 :
        //case 5 : level = 'E'; break;
        //case 6 : level = 'D'; break;
        //case 7 : level = 'C'; break;
        //case 8 : level = 'B'; break;
        //case 9 :
        //case 10 : level = 'A'; break;

        case 10 :
        case 9 : level = 'A'; break;
        case 8 : level = 'B'; break;
        case 7 : level = 'C'; break;
        case 6 : level = 'D'; break;
        default : level = 'E'; break;

    }

    printf("%d----->%c",score,level);
    return 0;
}
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{

    char letter,letter_old;

    //scanf("%c",&letter_old);
    letter_old = getchar();
    letter = letter_old;

    if((letter>='a' && letter <='z') || (letter>='A' && letter <='Z'))
    {
        //if(letter>=97 && letter <=122)
        if(letter>='a' && letter <='z')
            letter -= 32;
        else if(letter>='A' && letter <='Z')
            letter += 32;

        printf("Old value: %c----%d\n",letter_old,letter_old);
        printf("New value: %c----%d\n",letter,letter);

        putchar('\n');
        putchar('\n');
        putchar(letter_old);
        putchar(letter);
    }


    return 0;
}



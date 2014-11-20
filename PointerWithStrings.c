//void foo(int array[],int n);
//void bar(int array[][3],int n);
//int a[3][5],b[5][3],c[3][3];
int myStrlen(char p[]/*   char *p  */);
void myStrcpy(char dest[],char source[]);
int myStrcmp(char s1[],char s2[]);
int main(int argc, char *argv[])
{
    char str1[20],str2[20];


    myStrcpy(str1,argv[1]);
    myStrcpy(str2,argv[2]);
    //gets(str1);
    //gets(str2);
    //printf("%d",myStrlen(str1/* &str1[0] */));
    //myStrcpy(str2,str1);
    printf("%d",myStrcmp(str1,str2));

    return 0;
}

int myStrlen(char p[]/*   char *p  */)
{
    int cnt=0;
    while(*p!='\0')
    {
        p++;
        cnt++;
    }
    return cnt;
}

void myStrcpy(char dest[],char source[])
{
    /*while(*source){
        *dest = *source;
        dest++;
        source++;
    }
    *dest = '\0';
    */
    int i=0;
    while(source[i]){
        dest[i] = source[i];
        i++;
    }
    dest[i] = '\0';
}


int myStrcmp(char s1[],char s2[])
{
    while( (*s1==*s2) && (*s1!='\0' || *s2!='\0') ){
        s1++;
        s2++;
    }
    return *s1-*s2;
}











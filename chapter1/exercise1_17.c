#include<stdio.h>
#define MAXLINE 1000
#define MAXLENGTH 18

int gettline(char line[],int maxline);
void copy(char to[],char from[]);

int main()
{
        int len,max=0;
        char line[MAXLINE];
        char longest[MAXLINE];
        while((len=gettline(line,MAXLINE))>0)

                if(len>MAXLENGTH){
                        printf("LINE CONTENTS : %s",line);
printf("\n");
return 0;
}

int gettline(char s[],int lim)
{
        int c,i;
        for(i=0;i<lim-1 && (c=getchar())!=EOF && c!='\n';++i)
                s[i] = c;
        if(c=='\n'){
                s[i] = c;
                ++i;
        }
        s[i] = '\0';
        return i;

}


OUTPUT:
hello ,how are you?? I am fine  
LINE CONTENTS : hello ,how are you?? I am fine
hi
heloo



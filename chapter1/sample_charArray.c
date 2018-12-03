#include<stdio.h>
#define MAXLINE 1000
int gettline(char line[],int maxline);
void copy(char to[],char from[]);

int main()
{
        int len,max=0;
        char line[MAXLINE];
        char longest[MAXLINE];
        while((len=gettline(line,MAXLINE))>0)
                if(len>max){
                        max=len;
                        copy(longest,line);
                }
        if(max>0)
                printf("%s",longest);
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
void copy(char to[],char from[])
{
        int i=0;
        while((to[i] = from[i])!= '\0')
                ++i;
}


OUTPUT :


hello world
hai
welcome to the world
welcome 

welcome to the world

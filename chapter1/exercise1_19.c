#include<stdio.h>
#define MAXLINE 1000
int gettline(char line[],int maxline);
int reverse(char s[]);
int main()
{
        int len,max=0;
        char line[MAXLINE];
        while((len=gettline(line,MAXLINE))>0)
        {
        }
}

int gettline(char s[],int lim)
{
        int c,i;
//      char rev[100];
        int j=0;
        for(i=0;i<lim-1 && (c=getchar())!=EOF && c!='\n';++i)
                s[i]=c;
        if(c=='\n')
        {
                s[i]=c;
                ++i;
        }
        s[i] = '\0';
        reverse(s);

}
int reverse(char s[])
{
        int i=0,j=0;
char rev[40];
while(s[i]!='\0')
{
        i++;
}

while(i>=0)
{
        rev[j]=s[i];
        --i;

        printf("%c",rev[j]);
        ++j;
}
}

OUTPUT:
hello

olleh

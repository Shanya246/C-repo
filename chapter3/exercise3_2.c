#include<stdio.h>
void escape(char s[],char t[]);

int main(void)
{
    char s[100],t[100];

        int i,c;
int lim=100;
    for(i=0;i<lim-1 && (c=getchar())!=EOF;++i)
        s[i]=c;

    s[i]='\0';

    escape(s,t);

    printf("%s",s);

    return 0;
}

void escape(char s[],char t[])
{
    int i,j;

    i=j=0;

    while(t[i] != '\0')
    {
        switch(t[i])
        {
            case '\t':
                    s[j]='\\';
                    ++j;
                    s[j]='t';
                    break;
            case '\n':
                    s[j]='\\';
                    ++j;
                    s[j]='n';
                    break;
            default:
                    s[j]=t[i];
                    break;
        }
        ++i;
        ++j;
                                                                                                                                            1,4           Top
 }

    s[j]='\0';
}



OUTPUT:

Hai   Hello   world
Hai/thello/tworld

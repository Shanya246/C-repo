#include<stdio.h>

int main()
{
        int i=0,c,lim=100;
        char s[100];

        while(i<(lim-1))
        {
                c=getchar();
                if(c == EOF)
                        break;
                else if( c == '\n')
                        break;
                s[i++] = c;
        }
        s[i] = '\0';

}


OUTPUT :

Hello

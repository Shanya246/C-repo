#include<stdio.h>
int main()
{
        int c;
        c=getchar();
        while((c=getchar())!=EOF)
        {
                putchar(c);
                if(c == ' ' || c=='\n' || c== '\t' )
                {
                        printf("\n");
                }
        }

}

OUTPUT :

hello world
hello 
world

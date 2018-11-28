#include<stdio.h>
int main()
{
        int c,cc=0,tab=0,blank=0;
        while((c=getchar()) != EOF)
        {       if(c == '\n')
                        ++cc;
                else if(c == 32)
                        ++blank;
                else if(c==9)
                        ++tab;

        }
        printf("\nLine : %d\n", cc);
        printf("\nTab : %d\n",tab);
        printf("\nBlank : %d\n",blank);
}




OUTPUT:

hello world !!
hai	

Line : 2

Tab : 1

Blank : 2

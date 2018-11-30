#include<stdio.h>
int main()
{
        int c=0;
//      char tab='t';

        printf("\n Enter the string");
        while((c=getchar())!= EOF)
        {
                if(c=='\t')
                        printf("\\t");

                else if(c=='\b')
                        printf("\\b");

                else if(c=='\\')
                        printf("\\");
                else
                        putchar(c);


        }
}


OUTPUT :

Enter the string

hai 	hello
hai\thello

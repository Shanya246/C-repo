#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int strrindex(char s[], char t[]);

int main()
{
        int i;
        char parent[] = "A String with some letters in it.";
        char child[] = "it";
        i = strrindex(parent, child);
        printf("%d\n",i);
        return 0;
}

int strrindex(char s[], char t[])
{
        int i, j, k, m = -1;
        for (i = 0; s[i] != '\0'; i++)
        {
                for (j=i, k=0; t[k]!='\0' && s[j]==t[k]; j++, k++)
                        ;
                if (k > 0 && t[k] == '\0')
                        m = i;
        }
        return m;
}


OUTPUT:

30

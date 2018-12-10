#include<stdio.h>
#include<stdlib.h>
void fun_call(char str1[],char str2[]);
int main()
{
        char str1[4] = "abcd";
        char str2[3] = "ctb";
        int i,j;

        printf("\n  The Occurance of the first character is :");
        fun_call(str1,str2);

}

void fun_call(char str1[],char str2[])
{
        int i,j;
        for(i=0;str1[i] != '\0';i++)
        {
                for(j=0;str2[j]!='\0';j++)
                {
                        if(str1[i] == str2[j])
                        {
                                printf("%d\n",i);
                                exit(0);
                        }
                }
        }
}

OUTPUT :

The Occurance of the first character is :0

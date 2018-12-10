#include<stdio.h>
#include<string.h>
void squeeze(char s1[],char s2[]);
int main()
{
        char s1[] ="hello";

        char s2[]="world";
        int i,j,k;
        printf("\n Matching the two strings \n");
        squeeze(s1,s2);
}



void squeeze(char s1[],char s2[])
{
        int i,j;
        for(i=0;s1[i]!='\0';i++)
        {
                for(j=0;s2[j]!='\0';j++)
                {
                        if(s1[i]!='\0')
                        {
                        if(s1[i]==s2[j])
                        {

                                s1[i]='\0';
                        }
                        }
                }
                printf("%c",s1[i]);
        }
        printf("\n");

}

OUTPUT :

Matching the two strings 
he

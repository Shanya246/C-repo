#include<stdio.h>
void upper_string(char c[]);
int main()
{
        char c[20];
        int i;
         printf("\n Lowercase to upper case ");
        printf("\n Enter the letters to convert the case : ");
        for(i=0;i!='\n';i++)
        {
                scanf("%c",&c[i]);
        }
        upper_string(c);
        printf("%s",c);

}
void upper_string(char c[])
{
        int a=0;
        while(c[a] != '\0')
        {
        if(c[a]>='a' && c[a]<='z'){
        //      printf("%c",c[a]-32);
                c[a] = c[a]-32;
}
a++;
}
}

                                                           
OUTPUT :

Lowercase to upper case 
Enter the letters to convert the case : hello
HELLO

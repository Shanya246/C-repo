#include<stdio.h>
#define MAXLINE 1000
int gettline(char line[],int maxline);
void copy(char to[],char from[]);


int main()
{
        int len,max=0;
        char line[MAXLINE];
        char longest[MAXLINE];
        while((len=gettline(line,MAXLINE))>0)
                if(len>max){
                        max=len;
                        copy(longest,line);
                }
        if(max>0){
                if(max>MAXLINE){
                        printf("\n\n Storage Limit exceeded by :",max-MAXLINE);
                        printf("\n String length :%d ",max-1);
                        printf("%s",longest);
                }else{
                        printf("%s",longest);
                        printf("\n Length of the string : %d",max);
                }
}
printf("\n");
return 0;
}

int gettline(char s[],int lim)
{
        int c,i;
        for(i=0;i<lim-1 && (c=getchar())!=EOF && c!='\n';++i)
                s[i] = c;
        if(c=='\n'){
                s[i] = c;
                ++i;
        }
        s[i] = '\0';
        return i;

}
void copy(char to[],char from[])
{
        int i=0;
        while((to[i] = from[i])!= '\0')
                ++i;
}


OUTPUT:

hello are you there !!
hello , how are you??
hai great !!
hello are you there !!

 Length of the string : 23

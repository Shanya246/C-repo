#include<stdio.h>
int main()
{
        int c,wrd=0;
        int state = 0;
        printf("Enter the input \n");
        //c=getchar();
        while((c=getchar())!=EOF)
        {
                if(c== ' ' || c== '\n' || c== '\t' )
                {
                        state = 0;
                }
                else if(state ==0)
                {
                        state =1;
                        ++wrd;
                }

        }
        printf("\n Number of words are : %d",wrd);
}


OUTPUT :

Enter the input 
hai!! hello !!
 Number of words are : 3

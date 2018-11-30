#include<stdio.h>
int main()
{
        int c,digit[10],i,wspace=0,other=0;
        for(i=0;i<10;i++)
                digit[i]=0;

        while((c=getchar())!=EOF)
        {
                if( c>='0' && c<='9')
                {
                        ++digit[c-'9'];
                }
                else if(c==' ' || c== '\n' || c== '\t')
                        ++wspace;
                else
                        ++other;
        }
        printf("\n Number of white space : %d , Others : %d \n",wspace,other);

        for(i=0;i<10;i++)
                printf("\t %d ",digit[i]);

}


OUTPUT :

23423545 !@# 43654

 Number of white space : 4 , Others : 3 
	0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 	 0 

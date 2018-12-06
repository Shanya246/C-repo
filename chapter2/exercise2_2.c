#include<stdio.h>
#include<limits.h>

int main()
{
        printf("\n Bits Range ");
        printf("\n\t\t\t MAXIMUM \t\t MINIMUM");
        printf("\n Character      :\t %d\t \t\t %d\n ",CHAR_MAX,CHAR_MIN);
        printf("\n Signed Char    :\t %d\t \t\t %d\n ",SCHAR_MAX,SCHAR_MIN);
        printf("\n Unsigned Char  : \t %u\n",UCHAR_MAX);

        printf("\n Short          : \t%d\t\t\t %d\n",SHRT_MAX,SHRT_MIN);
        printf("\n Unsigned Short : \t %u\n",USHRT_MAX);
        printf("\n Integer        :\t %d \t\t %d\n",INT_MAX,INT_MIN);
        printf("\n Unsigned Int   :\t%u\n ",UINT_MAX);

        printf("\n Long           :\t%ld \t%ld\n",LONG_MAX, LONG_MIN);
        printf("\n Unsigned Long  :\t%lu\n ",ULONG_MAX);
}


OUTPUT :

Bits Range 
			 MAXIMUM 		 MINIMUM
 Character      :	 127	 		 -128
 
 Signed Char    :	 127	 		 -128
 
 Unsigned Char  : 	 255

 Short          : 	32767			 -32768

 Unsigned Short : 	 65535

 Integer        :	 2147483647 		 -2147483648

 Unsigned Int   :	4294967295
 
 Long           :	9223372036854775807 	-9223372036854775808

 Unsigned Long  :	18446744073709551615

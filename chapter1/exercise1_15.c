#include<stdio.h>
float fun_conversion(float);
float fareh,celcius,upper=300,lower=0,step=20;
int main()
{
        celcius=lower;
        printf("\n Celcius to Farenheit \n");

        while(celcius<=upper)
        {
        celcius = fun_conversion(celcius);
        celcius = celcius+step;
        }

}

float fun_conversion(float cel)
{
        fareh =(cel*(9.0/5.0))+32;
        printf("%.2f\t\t %.2f\n",cel,fareh);
        return cel;
}


OUTPUT:

 Celcius to Farenheit 
0.00		 32.00
20.00		 68.00
40.00		 104.00
60.00		 140.00
80.00		 176.00
100.00		 212.00
120.00		 248.00
140.00		 284.00
160.00		 320.00
180.00		 356.00
200.00		 392.00
220.00		 428.00
240.00		 464.00
260.00		 500.00
280.00		 536.00
300.00		 572.00

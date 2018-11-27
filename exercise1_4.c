#include<stdio.h>                                                                                                                                 
int main()                                                                                                                                        
{                                                                                                                                                 
float fareh,celcius,upper = 300 , lower = 0, step=20;                                                                                               
celcius= lower;                                                                                                                                   
printf("\n ----------------------------\n");                                                                                                      
printf("\n celcius \t|| Fahrenheit\n");                                                                                                           
printf("\n -----------------------------\n");                                                                                                     
while(celcius <= upper)                                                                                                                           
{                                                                                                                                                 
                                                                                                                                                  
fareh =(celcius*( 9/5))+32;                                                                                                                       
printf("||%.2f\t||\t %.2f ||\n",celcius,fareh);                                                                                                       
celcius= celcius+step;                                                                                                                            
                                                                                                                                                  
}                                                                                                                                                 
}  




OUTPUT :
  ----------------------------                                                                                                                     
                                                                                                                                                  
 celcius        || Fahrenheit                                                                                                                     
                                                                                                                                                  
 -----------------------------                                                                                                                    
||0.00           32.00||                                                                                                                          
||20.00          68.00||                                                                                                                          
||40.00          104.00||                                                                                                                         
||60.00          140.00||                                                                                                                         
||80.00          176.00||                                                                                                                         
||100.00                 212.00||                                                                                                                 
||120.00                 248.00||                                                                                                                 
||140.00                 284.00||                                                                                                                 
||160.00                 320.00||                                                                                                                 
||180.00                 356.00||                                                                                                                 
||200.00                 392.00||                                                                                                                 
||220.00                 428.00||                                                                                                                 
||240.00                 464.00||                                                                                                                 
||260.00                 500.00||                                                                                                                 
||280.00                 536.00||                                                                                                                 
||300.00                 572.00||           

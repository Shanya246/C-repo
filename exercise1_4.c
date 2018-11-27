#include<stdio.h>                                                                                                                                 
int main()                                                                                                                                        
{                                                                                                                                                 
int fareh,celcius,upper = 300 , lower = 0, step=20;                                                                                               
celcius= lower;                                                                                                                                   
printf("\n ----------------------------\n");                                                                                                      
printf("\n celcius \t|| Fahrenheit\n");                                                                                                           
printf("\n -----------------------------\n");                                                                                                     
while(celcius <= upper)                                                                                                                           
{                                                                                                                                                 
                                                                                                                                                  
fareh =(celcius*( 9/5))+32;                                                                                                                       
printf("||%d\t||\t %d ||\n",celcius,fareh);                                                                                                       
celcius= celcius+step;                                                                                                                            
                                                                                                                                                  
}                                                                                                                                                 
}  




OUTPUT :

                                                                                                                                                  
 ----------------------------                                                                                                                     
                                                                                                                                                  
 celcius        || Fahrenheit                                                                                                                     
                                                                                                                                                  
 -----------------------------                                                                                                                    
||0     ||       32 ||                                                                                                                            
||20    ||       52 ||                                                                                                                            
||40    ||       72 ||                                                                                                                            
||60    ||       92 ||                                                                                                                            
||80    ||       112 ||                                                                                                                           
||100   ||       132 ||                                                                                                                           
||120   ||       152 ||                                                                                                                           
||140   ||       172 ||                                                                                                                           
||160   ||       192 ||                                                                                                                           
||180   ||       212 ||                                                                                                                           
||200   ||       232 ||                                                                                                                           
||220   ||       252 ||                                                                                                                           
||240   ||       272 ||                                                                                                                           
||260   ||       292 ||                                                                                                                           
||280   ||       312 ||                                                                                                                           
||300   ||       332 ||         

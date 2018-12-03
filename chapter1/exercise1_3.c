#include<stdio.h>                                                                                                                                 
int main()                                                                                                                                        
{                                                                                                                                                 
int fareh,celcius,upper = 300 , lower = 0, step=20;                                                                                               
fareh= lower;                                                                                                                                     
printf("\n ----------------------------\n");                                                                                                      
printf("\n Fahrenheit \t|| Celcius\n");                                                                                                           
printf("\n -----------------------------\n");                                                                                                     
while(fareh <= upper)                                                                                                                             
{                                                                                                                                                 
                                                                                                                                                  
celcius = 5*(fareh-32)/9;                                                                                                                         
//printf("Fahrenheit \t Celcius");                                                                                                                
printf("||%d\t||\t %d ||\n",fareh,celcius);                                                                                                       
fareh= fareh+step;                                                                                                                                
                                                                                                                                                  
}                                                                                                                                                 
}       


OUTPUT :
                                                                                                                                                 
 ----------------------------                                                                                                                     
                                                                                                                                                  
 Fahrenheit     || Celcius                                                                                                                        
                                                                                                                                                  
 -----------------------------                                                                                                                    
||0     ||       -17 ||                                                                                                                           
||20    ||       -6 ||                                                                                                                            
||40    ||       4 ||                                                                                                                             
||60    ||       15 ||                                                                                                                            
||80    ||       26 ||                                                                                                                            
||100   ||       37 ||                                                                                                                            
||120   ||       48 ||                                                                                                                            
||140   ||       60 ||                                                                                                                            
||160   ||       71 ||                                                                                                                            
||180   ||       82 ||                                                                                                                            
||200   ||       93 ||                                                                                                                            
||220   ||       104 ||                                                                                                                           
||240   ||       115 ||                                                                                                                           
||260   ||       126 ||                                                                                                                           
||280   ||       137 ||                                                                                                                           
||300   ||       148 ||    

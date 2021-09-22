//TESTJCC JOB (SETUP),                                                  
//            'Test JCC',                                               
//            CLASS=A,                                                  
//            MSGCLASS=H,                                               
//            REGION=8M,                                                
//            MSGLEVEL=(1,1)                                            
//********************************************************************  
//*                                                                     
//* Name: SYS2.JCLLIB(TESTJCC)                                          
//*                                                                     
//* Desc: JCC compile and go                                            
//*                                                                     
//********************************************************************  
//*                                                                     
//BEER    EXEC JCCCG                                                    
//COMPILE.SYSIN DD *                                                    
#include <stdio.h>                                                      
#include <stdlib.h>                                                     
                                                                        
int main()                                                              
{                                                                       
 printf ("Hello, world!\n");

 return(0);
}                                                                       
/*                                                                      
//                                                                      

/*Q53: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*
*/
#include <stdio.h>
int main()
{
    int i,j,a,b;
    for(i=1;i<=9;i=i+2)
    { 

        for(j=1;j<=i;j++)
        {
            printf("*");
        }
         printf("\n");
        
        if(i==9)
        {
            for(a=7;a>=1;a=a-2)
            {
                for(b=a;b>=1;b--)
                {
                    printf("*");
                   
                }
                printf("\n");
            }
        }
        
        
       
    }
    
    return 0;
}


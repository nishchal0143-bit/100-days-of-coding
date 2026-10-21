/*Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*
*/
#include <stdio.h>
int main()
{
    int i,j,a,b;
    for(i=1;i<=5;i=i+2)
    { 

        for(j=1;j<=i;j++)
        {
            printf("*");
            printf("\n");
        }
         printf("\n");
        
        if(i==5)
        {
            for(a=3;a>=1;a=a-2)
            {
                for(b=a;b>=1;b--)
                {
                    printf("*");
                    printf("\n");
                }
                printf("\n");
            }
        }
        
        
       
    }
    
    return 0;
}


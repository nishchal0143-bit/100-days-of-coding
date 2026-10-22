/*write a program to print the following pattern
   *                      
  ***                         
 *****
*******
 *****
  ***
   *
*/
#include <stdio.h>
int main()
{
    int i,j,k,l,a=0;
    for(i=1;i<=4;i++)
    {
       for(k=4-i;k>=1;k--)
       printf(" ");
       for(l=a;l>=1;l--)
       printf("*");

        for(j=1;j<=i;j++)
        printf("*");

        printf("\n");
        a++;
    }
    for(i=1;i<=3;i++)
    {
      for(int s=1;s<=i;s++)
      printf(" ");

      for(int st=2;st>=i;st--)
      printf("*");

        for(j=3;j>=i;j--)
        printf("*");

        printf("\n");

    }
return 0;
}
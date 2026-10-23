/*Write a program to print all the prime numbers from 1 to n.*/
#include <stdio.h>
int main()
{
    int n,i,j;
    printf("ENTER THE NUMBER TILL YOU WANT PRIME NUMBERS\n");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        int c=0;
        for(j=1;j<=i;j++)
        {
           if(i%j==0)
           c++;
        }
        if(c==2)
        printf("%d ",i);
        
    }
    return 0;
}
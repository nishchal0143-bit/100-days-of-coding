//Write a program to check if a number is prime.
#include <stdio.h>
int main()
{
    int i,count=0,n;
    printf("ENTER A NUMBER\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        count++;
    }
    if(count==2)
    printf("IT IS PRIME NUMBER");
    else
    printf("IT IS NOT A PRIME NUMBER");
    
    return 0;
}
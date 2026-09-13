//Write a program to check if a number is an Armstrong number.
#include <stdio.h>
int main()
{
    int n,d,sum=0;
    printf("ENTER THE NUMBER\n");
    scanf("%d", &n);
    int m=n;
    while(m!=0)
    {
        d=m%10;
        sum=sum+(d*d*d);
        m=m/10;

    }
    if(sum==n)
    printf("YES IT IS AN ARMSTRONG NUMBER");
    else
    printf("NO IT IS NOT AN ARMSTRONG NUMBER");
    
    return 0;
}
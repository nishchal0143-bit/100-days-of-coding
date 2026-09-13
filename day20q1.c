//Write a program to find the product of odd digits of a number.
#include <stdio.h>
int main()
{
    int n,d,sum=0;
    printf("ENTER A NUMBER\n");
    scanf("%d", &n);
    int m=n;
    while(m!=0)
    {
        d=m%10;
        if((d%2)!=0)
        sum=sum+d;
        m=m/10;
    }
    printf("THE SUM OF ODD DIGITS  %d", sum);
    return 0;
}

//Write a program to find the sum of digits of a number.
#include <stdio.h>
int main()
{
    int n,d,sum=0;
    printf("ENTER A NUMBER");
    scanf("%d", &n);
    int m=n;
    while(m!=0)
    {
        d=m%10;
        sum=sum+d;
        m=m/10;
    }
    printf("THE SUM OF DIGITS  %d", sum);
    return 0;
}

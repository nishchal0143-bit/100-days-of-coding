//Write a program to reverse a given number.
#include <stdio.h>
int main()
{
    int n,d,revnum=0;
    printf("ENTER A NUMBER \n");
    scanf("%d", &n);
    while(n!=0)
    {
        d=n%10;
        revnum=revnum*10+d;
        n=n/10;
    }
    printf("REVERSE OF NUMBER IS  %d", revnum);
    return 0;
}
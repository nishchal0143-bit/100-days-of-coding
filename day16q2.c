//Write a program to check if a number is a palindrome
#include <stdio.h>
int main()
{
    int n,d,revnum=0;
    printf("ENTER A NUMBER \n");
    scanf("%d", &n);
    int m=n;
    while(m!=0)
    {
        d=m%10;
        revnum=revnum*10+d;
        m=m/10;
    }
    if(revnum==n)
    printf("YES IT IS PALINDROME AND REVERSE OF NUMBER IS  %d", revnum);
    else
 printf("NO IT IS NOT PALINDROME AND REVERSE OF NUMBER IS  %d", revnum);
    return 0;
}
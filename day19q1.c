//Write a program to find the LCM of two numbers.
#include <stdio.h>
int main()
{
    int i,a,b,hcf,lcm;
    printf("ENTER TWO NUMBERS\n");
    scanf("%d %d", &a, &b);
    for(i=1;i<=a;i++)
    {
        if(a%i==0&&b%i==0)
        hcf=i;
    }
    lcm=(a*b)/hcf;
    printf("LCM OF A AND B IS  %d", lcm);
    return 0;

}
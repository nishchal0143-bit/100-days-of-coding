//Write a program to find the HCF (GCD) of two numbers.
#include <stdio.h>
int main()
{
    int i,a,b,hcf;
    printf("ENTER TWO NUMBERS\n");
    scanf("%d %d", &a, &b);
    for(i=1;i<=a;i++)
    {
        if(a%i==0&&b%i==0)
        hcf=i;
    }
    printf("HCF OF A AND B IS  %d", hcf);
    return 0;

}
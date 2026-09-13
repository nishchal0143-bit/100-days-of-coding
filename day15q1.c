//Write a program to calculate the factorial of a number.
#include <stdio.h>
int main()
{
    int fact=1,i,num;
    printf("ENTER A NUMBER ");
    scanf("%d", &num);
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    printf("THE FACTORIAL OF A NUMBER IS  %d", fact);
    return 0;

}
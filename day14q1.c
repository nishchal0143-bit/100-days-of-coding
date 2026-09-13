//Write a program to print the sum of the first n odd numbers.
#include <stdio.h>
int main()
{
    int n,i,sum=0;
    printf("ENTER NUMBER OF TERMS\n");
    scanf("%d", &n);
    for(i=1;i<=(2*n)-1;i=i+2)
    {
        sum=sum+i;
        
    }
    printf("THE SUM IS %d", sum);
}

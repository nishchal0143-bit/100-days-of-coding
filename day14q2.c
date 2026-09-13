//Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>
int main()
{
    int n,i,p=1;
    printf("ENTER NUMBER OF TERMS\n");
    scanf("%d", &n);
    for(i=2;i<=(2*n);i=i+2)
    {
        p=p*i;
        
    }
    printf("THE PRODUCT IS %d", p);
}

/*Reverse an array without taking extra space*/

#include <stdio.h>
int main()
{
    int i,n;
    printf("ENTER NUMBER OF ELEMENTS IN AN ARRAY\n");
    scanf("%d", &n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("ELEMENTS OF ARRAY ARE\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
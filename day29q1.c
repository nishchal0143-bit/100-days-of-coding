/*Find the sum of array elements.*/

#include <stdio.h>
int main()
{
    int arr[5],i,S=0;
    printf("ENTER 5 ELEMENTS IN AN ARRAY\n");
    for(i=0;i<5;i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("SUM OF ELEMENTS OF ARRAY IS\n");
    for(i=0;i<5;i++)
    {
     S=S+arr[i];
    }
    printf("%d",S);
    return 0;
}
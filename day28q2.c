/*Q56: Read and print elements of a one-dimensional array.*/
#include <stdio.h>
int main()
{
    int arr[5],i;
    printf("ENTER 5 ELEMENTS IN AN ARRAY\n");
    for(i=0;i<5;i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("ELEMENTS OF ARRAY ARE\n");
    for(i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
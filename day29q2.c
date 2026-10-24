/*Find the maximum and minimum element in an array.*/

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
    printf("\n");
    int l=arr[0];
    int s=arr[0];
    for(i=0;i<5;i++)
    {
        if(arr[i]<s)
        s=arr[i];
        if(arr[i]>l)
        l=arr[i];

    }
    printf("SMALLEST NUMBER IN ARRAY IS: %d\n",s);
    printf("LARGEST NUMBER IN ARRAY IS: %d",l);
    return 0;
}
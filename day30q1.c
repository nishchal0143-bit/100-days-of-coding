/*Count even and odd numbers in an array.*/

#include <stdio.h>
int main()
{
    int arr[10],i,SO=0,SE=0;
    printf("ENTER 10 ELEMENTS IN AN ARRAY\n");
    for(i=0;i<10;i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("SUM OF ELEMENTS OF ARRAY IS\n");
    for(i=0;i<10;i++)
    {
        if(arr[i]%2==0)
     SE=SE+arr[i];
     else
     SO=SO+arr[i];
    }
    printf("THE SUM OF EVEN NUMBERS IN ARRAY IS: %d\n", SE);
     printf("THE SUM OF ODD NUMBERS IN ARRAY IS: %d\n", SO);
    
    
    return 0;
}
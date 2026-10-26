/*Count positive, negative, and zero elements in an array.*/

#include <stdio.h>
int main()
{
    int arr[10],i,p=0,n=0,z=0;
    printf("ENTER 10 ELEMENTS IN AN ARRAY\n");
    for(i=0;i<10;i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("SUM OF ELEMENTS OF ARRAY IS\n");
    for(i=0;i<10;i++)
    {
        if(arr[i]>0)
        p++;
        else if(arr[i]<0)
        n++;
        else
        z++;
    }
    printf("THE COUNT OF POSITIVE NUMBERS IN ARRAY : %d\n",p );
     printf("THE COUNT OF NEGATIVE NUMBERS IN ARRAY: %d\n",n );
     printf("THE COUNT OF ZEROS IN ARRAY: %d\n",z );
    
    
    return 0;
}
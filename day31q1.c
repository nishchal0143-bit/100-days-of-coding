/*Search for an element in an array using linear search.*/
#include <stdio.h>
int main()
{
    int n,i,flag=0,ns;
    printf("ENTER THE NUMBER OF ELEMENTS IN AN ARRAY\n");
    scanf("%d",&n);
    int arr[n];
    printf("ENTER THE ELEMENTS IN ARRAY\n");
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("ENTER THE NUMBER TO BE SEARCHED IN AN ARRAY\n");
    scanf("%d",&ns);
    for(i=0;i<=n-1;i++)
    {
        if(arr[i]==ns)
        {
            flag=1;
            break;
        }
        else 
        continue;
    }
    if(flag=1)
    printf("NUMBER FOUND IN ARRAY AT POSITION :%d", i+1);
    else
    printf("NUMBER NOT FOUND IN ARRAY");
    return 0;

}
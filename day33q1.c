//Search in a sorted array using binary search.
#include <stdio.h>
int main()
{
    int arr[10];
    int i,j,t=0;
    printf("enter 10 elements\n");
    for(i=0;i<10;i++)
{
      scanf("%d", &arr[i]);
     
    }
    for(i=0;i<9;i++)
    {
        for(j=0;j<(9-i);j++)
        {
            if(arr[j]>arr[j+1])
            {
                t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }
    printf("ARRANGED IN ASCENDING ORDER\n");
    for(i=0;i<10;i++)
    {
    printf("%d ",arr[i] );
    }
    printf("ENTER THE NUMBER TO BE SEARCHED\n");
    int ns;
    scanf("%d",&ns);
    
    int lb=0,ub=9,p,flag=0;
    while(ub>=lb)
    {
     p=(ub+lb)/2;
     if(arr[p]>ns)
     ub=p-1;
     if(arr[p]<ns)
     lb=p+1;
     if(arr[p]==ns)
     {
      flag=1;
      break;
     }
    }
    if(flag==1)
    {
        printf("ELEMENT FOUND IN ARRAY AT POSITION:%d ",p+1);
    }
    else
    printf("NUMBER NOT FOUND");
    return 0;
}
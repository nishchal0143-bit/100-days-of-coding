//find the second largest element.
#include<stdio.h>
int arr[100],n;
void readArray();
int findSecondLargest();

int main()
{
printf("ENTER NUMBER OF ELEMENTS:\n");
scanf("%d",&n);
readArray();
int sl=findSecondLargest();
printf("SECOND LARGEST ELEMENT IS: %d",sl);
}

void readArray()
{
    printf("ENTER %d ELEMENTS IN ARRAY\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n");
}

int findSecondLargest()
{
    int L=arr[0];
    int sl=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>L)
        L=arr[i];            //largest element stored
    }

    for(int i=0;i<n;i++)
    {
        if(arr[i]==L)
        continue;
        else
        {
         if(arr[i]>sl)
         sl=arr[i];          //second largest element
        }
    }
    return sl;
}
//Insert an element in a sorted array at the appropriate position.
#include <stdio.h>
int main()
{
   
   int n,num,i,k=0;
   printf("ENTER THE NUMBER OF ELEMENTS\n");
   scanf("%d",&n); 
   int a[n+1];
   printf("ENTER ELEMENTS IN ARRAY IN ASCENDING FORM\n");
   for(i=0;i<n;i++)
   {
    scanf("%d",&a[i]);
   }
printf("ENTER THE NUMBER TO BE INSERTED IN ARRAY \n");
scanf("%d",&num);

for(i=0;i<n;i++)
{
    if(a[i]>num)
    {
        k=i;
        break;
    }
}
int arr[n+1];

for(i=0;i<k;i++)
{
    arr[i]=a[i];
}
arr[k]=num;
for(i=k+1;i<n+1;i++)
{
    arr[i]=a[i-1];
}
printf("NOW ARRAY AFTER INSERTION IS\n");
 for(i=0;i<n+1;i++)
   {
   printf("%d ",arr[i]);
   }
   return 0;

}
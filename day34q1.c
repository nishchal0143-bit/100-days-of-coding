//Insert an element in an array at a given position.
#include <stdio.h>
int main()
{
    int n,num,i,k=0,j;
   printf("ENTER THE NUMBER OF ELEMENTS\n");
   scanf("%d",&n); 
   int a[n+1];
   printf("ENTER ELEMENTS IN ARRAY\n");
   for(i=0;i<n;i++)
   {
    scanf("%d",&a[i]);
   }
printf("ENTER THE NUMBER TO BE INSERTED IN ARRAY \n");
scanf("%d",&num);
printf("ENTER THE POSITION/INDEX AT WHICH NUMBER IS TO BE INSERTED ");
scanf("%d",&j);
int arr[n+1];

for(i=0;i<j;i++)
{
    arr[i]=a[i];
}
arr[j]=num;
for(i=j+1;i<n+1;i++)
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
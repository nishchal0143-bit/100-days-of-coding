//Delete an element from an array.
#include<stdio.h>
int main()
{
    int n,num,i,k=0;
   printf("ENTER THE NUMBER OF ELEMENTS\n");
   scanf("%d",&n); 
   int a[n+1];
   printf("ENTER ELEMENTS IN ARRAY\n");
   for(i=0;i<n;i++)
   {
    scanf("%d",&a[i]);
   }
printf("ENTER THE NUMBER TO BE DELETED FROM ARRAY \n");
scanf("%d",&num);

for(i=0;i<n;i++)
{
    if(a[i]==num)
    {
        k=i;
        break;
    }
}
int c[n-1];
if(k==0)
printf("NUMBER IS NOT PRESENT IN THE ARRAY");

else
{
    for(i=0;i<k;i++)
    {

        c[i]=a[i];
    }
    for(i=k+1;i<n;i++)
    {
        c[i-1]=a[i];
    }
}
printf("NOW ARRAY AFTER DELETION IS\n");
 for(i=0;i<n-1;i++)
   {
   printf("%d ",c[i]);
   }
   return 0;

}
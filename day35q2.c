//Rotate an array to the right by k positions.
#include<stdio.h>
int main()
{
    int n,num,i,k=0;
   printf("ENTER THE NUMBER OF ELEMENTS\n");
   scanf("%d",&n); 
   int a[n];
   printf("ENTER ELEMENTS IN ARRAY\n");
   for(i=0;i<n;i++)
   {
    scanf("%d",&a[i]);
   }
   printf("ENTER THE NUMBER BY WHICH ARRAY IS TO BE ROTATED \n");
   scanf("%d",&num);
int c[n];
   for(i=n-num;i<n;i++)
   {
     c[k]=a[i];
     k++;
   }
for(i=0;i<n-num;i++)
{
    c[k]=a[i];
    k++;
}
printf("NOW ARRAY AFTER ROTATION IS\n");
 for(i=0;i<n;i++)
   {
   printf("%d ",c[i]);
   }
   return 0;

}
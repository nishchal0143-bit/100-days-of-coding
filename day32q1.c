/*Merge two arrays.*/
#include <stdio.h>
int main()
{
    int n,m,i,j=0;
    printf("ENTER THE NUMBER OF ELEMNTS IN FIRST ARRAY\n");
    scanf("%d",&n);
     printf("ENTER THE NUMBER OF ELEMENTS IN SECOND ARRAY\n");
    scanf("%d",&m);
     int a[n],b[n],c[n+m];
     printf("ENTER ELEMENTS IN ARRAY 1\n");
     for(i=0;i<n;i++)
     {
        scanf("%d",&a[i]);
     }
     printf("ENTER ELEMENTS IN ARRAY 2\n");
     for(i=0;i<m;i++)
     {
        scanf("%d",&b[i]);
     }

       for(i=0;i<n;i++)
     {
        c[i]=a[i];
     }
     for(i=n;i<n+m;i++)
     {
       c[i]=b[j];
       j++;
     }
     printf("ELEMENTS IN ARRAY AFTER MERGING ARRAY 1 AND 2\n");
     for(i=0;i<n+m;i++)
     {
        printf("%d ",c[i]);
     }
     return 0;
     
}
//Find the sum of all elements in a matrix.
#include <stdio.h>
int main()
{
    int r,c,s=0;
    printf("ENTER THE NUMBER OF ROWS FOR MATRIX \n");
    scanf("%d",&r);
    printf("ENTER THE NUMBER OF CLUMNS FOR MATRIX \n");
    scanf("%d",&c);
    int a[r][c];
    printf("ENTER ELEMENTS IN MATRIX \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

 printf("ELEMENTS IN MATRIX ARE \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

   
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            s=s+a[i][j];
        }
      
    }
     printf("SUM OF ELEMENTS OF MATRIX IS: %d",s);
}

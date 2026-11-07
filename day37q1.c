//Find the sum of each row of a matrix and store it in an array.
#include<stdio.h>
int main()
{
     int r,c;
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
    int sr[r];
    
    for(int i=0;i<r;i++)
    {
        int s=0;
        for(int j=0;j<c;j++)
        {
         s=s+a[j][i];
        }
        sr[i]=s;

    }

   for(int i=0;i<r;i++)
{
    printf("SUM OF ROW %d IS: %d \n",i+1,sr[i]);
}
return 0;
}
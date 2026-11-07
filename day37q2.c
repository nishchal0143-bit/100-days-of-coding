//Find the transpose of a matrix
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
    int arr[c][r];

    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            arr[i][j]=a[j][i];
        }
    }

    printf("ELEMENTS OF TRANSPOSED MATRIX ARE\n");
     for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            printf("%d ",arr[i][j]);
        }
    printf("\n");
    }
return 0;


}
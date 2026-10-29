/*Find the digit that occurs the most times in an integer number.*/
#include <stdio.h>
int main()
{
    int i,k=0,m,n,c=0;
    printf("ENTER A NUMBER ");
    scanf("%d",&n);
    m=n;
    while(m!=0)
    {
    m=m/10;
    c++;
    }
    int dig[c];
    int a=n;
    
    while(a!=0)
    {
        int d = a%10;
        dig[k]=d;
        k++;
        a=a/10;

    }
    

}

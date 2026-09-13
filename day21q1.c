//Write a program to swap the first and last digit of a number.
#include <stdio.h>
#include <math.h>
int main()
{
    int num,d,nn,ld,fd,c=0;
    printf("ENTER THE NUMBER\n");
    scanf("%d", &num);
    int n=num;
    while(num!=0)
    {
        num=num/10;
        c++;
    }
ld=n%10;//last digit extract hogyi
fd=n/pow(10,c-1);//first digit extract hogyi
int t1= n/10;//last number hat gya aur baaki ke numbers extarct hogye
int t2= t1%(int)pow(10,c-2);
int nnn= (t2*10)+fd;
nn=(ld*pow(10,c-1))+nnn;
printf("REQUIRED NUMBER IS %d", nn);
return 0;
}

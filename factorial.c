#include<stdio.h>
void main()
{
    int a,fac,n;
    printf("enter a number");
    scanf("%d",&a);
    n=a;
    fac=1;
    for(a;a>=1;a--)
    {
       fac=fac*a; 
    }
    printf("facorial of %d is %d",n,fac);
}
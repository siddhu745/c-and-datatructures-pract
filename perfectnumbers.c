#include<stdio.h>
void main()
{
    int a,i,n,sum=0;
    printf("enter n value:");
    scanf("%d",&n);
    for(i=1;i<a;i++)
    {
        if(a%i==0) sum=sum+i;
    }
    if(sum==a) printf("It's a perfect number");
    else printf("It's not a perfect number");
}
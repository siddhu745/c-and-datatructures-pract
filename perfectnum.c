#include<stdio.h>
void main()
{
    int a,i,sum=0;
    printf("enter a number to check pefect number or not:");
    scanf("%d",&a);
    for(i=1;i<a;i++)
    {
        if(a%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==a)
    {
        printf("the given number is a perfect number");
    }
    else
    {
        printf("not a perfect number");
    }
    
}
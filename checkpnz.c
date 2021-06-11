#include<stdio.h>
void main()
{
    int a;
    printf("enter the integer:");
    scanf("%d",&a);
    if (a>=0)
    {
        if(a==0)
        {
            printf("this is zero");
        }
        else
        {
            printf("this is positive");
        }
        
    }
    else
    {
        printf("this is negative");
    } 
}
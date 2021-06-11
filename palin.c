#include<stdio.h>
void main()
{
    int a,rem,sum=0,n;
    printf("enter a number:");
    scanf("%d",&a);
    n=a;
    while(a>0)
    {
        rem=a%10;
        sum=sum*10+rem;
        a=a/10;  
    }
    if(sum==n)
    {
         printf("%d this is a palindrome",sum);
    }
    else
    {
        printf("%d this is not a palindrome",n);
    }
    
}
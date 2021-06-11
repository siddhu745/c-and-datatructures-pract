#include<stdio.h>
void main()
{
    int n,i;
    printf("enter n value");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        printf("%d * %d = %d\n",n,i,n*i);
    }
}
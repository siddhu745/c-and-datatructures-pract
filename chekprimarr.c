#include<stdio.h>
void main()
{
    int n,i,c,j;
    printf("enter the length of the array:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("enter a[%d]",i);
        scanf("%d",&a[i]);
    }
    printf(" prime numbers in the array are : ");
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=2;j<a[i];j++)
        {
            if(a[i]%j==0)
            {
                c=1;
                break;
            }
        }
        if(c==0&&a[i]!=1)
        {
            printf(" %d",a[i]);
        }
    }
}    
#include<stdio.h>
void main()
{
    int n,c,i,j;
    printf("enter the length of the array:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("enter a[%d]",i);
        scanf("%d",&a[i]);
    }
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
        if(c==0&&a[i]!=1&&a[i]!=0)
        {
            for(j=i;j<n;j++)
            {
                a[j]=a[j+1];
            }
            i--;
            n--;
        }
    }
    printf("after deleted prime numbers our array is:");
    for(i=0;i<n;i++)
    {
        printf("  %d",a[i]);
    }
}    
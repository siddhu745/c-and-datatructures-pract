#include<stdio.h>
void main()
{
    int n,i,j;
    printf("enter the length of the array:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("enter a[%d]",i);
        scanf("%d",&a[i]);   
    }
    printf("you entered this array\t:");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    for ( i=n; i>0; i--)
    {
        for(j=0;j<i;j++)
        {
            if(a[j]>a[j+1])
            {
                a[j]^=a[j+1]^=a[j]^=a[j+1];
            }
        }
    }
    printf("\nsorted array is\t\t:");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
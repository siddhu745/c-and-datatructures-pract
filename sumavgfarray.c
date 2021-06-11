#include<stdio.h>
void main()
{
    int n,i,sum=0,pro=1;
    float avg;
    printf("enter the length of the array:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("enter a[%d]",i);
        scanf("%d",&a[i]);
        sum=sum+a[i];
        pro=pro*a[i];
    }
    avg=sum/(float)n;
    printf("sum of array:%d\n",sum);
    printf("product of array:%d\n",pro);
    printf("average of array:%f",avg);
    
}
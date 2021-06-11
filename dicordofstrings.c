#include<stdio.h>
#include<string.h>
void main()
{
    int n,i,j;
    char a[100][100],temp[20];
    printf("enter no of strings: ");
    scanf("%d",&n);
    printf("--enter strings--\n");
    for(i=0;i<n;i++)
    {
        scanf("%s",a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(a[i],a[j])>0)
            {
                strcpy(temp,a[i]);
                strcpy(a[i],a[j]);
                strcpy(a[j],temp);
            }  
        }
    }
    printf("--dictionary order is--\n");
    for(i=0;i<n;i++)
    {
        printf("%s\n",a[i]);
    }

}
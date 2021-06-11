#include<stdio.h>
void main()
{
    int n,i;
    char a[100][100];
    printf("enter no of words: ");
    scanf("%d",&n);
    printf("--enter the words--\n");
    for(i=0;i<n;i++)
    {
        scanf("%s",a[i]);
    }
    printf("-- words reversed in a string--\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%s  ",a[i]);
    }

}
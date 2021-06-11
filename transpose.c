#include<stdio.h>
void main()
{
    int i,j,a[10][10],trans[10][10],row,col;
    printf("enter row of a matrix:\n");
    scanf("%d",&row);
    printf("enter col of a matrix:\n");
    scanf("%d",&col);
    printf("enter the elements in matrix a :\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("given matrix is:\n");
    for(i=0;i<row;i++)
    {
        printf("|");
        for(j=0;j<col;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("|\n");
    }
    printf("transposed matrix is\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            trans[j][i] = a[i][j];
        }
    }
    for(i=0;i<col;i++)
    {
        printf("|");
        for(j=0;j<row;j++)
        {
            printf("%d ",trans[i][j]);
        }
        printf("|\n");
    }
}
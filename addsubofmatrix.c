#include<stdio.h>
void main()
{
    int M,N,P,Q;
    int a[20][20],b[20][20],c[20][20],i,j;
    printf("enter MxN:\n");
    scanf("%d%d",&M,&N);
    printf("enter PxQ:\n");
    scanf("%d%d",&P,&Q);
    if(P!=M || Q!=N) printf("addition and subtraction not possible;\n");
    else{
    printf("enter the elements in first matrix:\n");
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            scanf("%d",&a[i][j]);
            
        }
        printf("\n");
    }
    printf("enter the elements in second matrix:\n");
    for(i=0;i<P;i++)
    {
        for(j=0;j<Q;j++)
        {
            scanf("%d",&b[i][j]);    
        }
        printf("\n");
    }
    printf("addition of matrices:\n");
    for(i=0;i<P;i++)
    {
        for(j=0;j<Q;j++)
        {
            c[i][j]=  a[i][j] + b[i][j];
            printf("%d  ",c[i][j]);  
        }
        printf("\n");
    }
    printf("subtraction of matrices:\n");
    for(i=0;i<P;i++)
    {
        for(j=0;j<Q;j++)
        {
            b[i][j]=  a[i][j] - b[i][j];
            printf("%d  ",b[i][j]);  
        }
        printf("\n");
    }
    }
}
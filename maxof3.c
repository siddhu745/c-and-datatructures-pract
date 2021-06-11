#include<stdio.h>
int main()
{
 int n1,n2,n3;
 printf("enter the values of n1,n2 and n3:");
 scanf("%d%d%d",&n1,&n2,&n3);
 if (n1>n2)
 {
    if(n1>n3)
    {
        printf("%d is bigger",n1);
    }
    else
    {
        printf("%d is bigger",n3);
    }
 }
else
{
    if(n2>n3)
    {
        printf("%d is bigger",n2);
    }
    else
    {
        printf("%d is bigger",n3);
    }
}

}
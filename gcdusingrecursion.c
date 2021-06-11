#include<stdio.h>
int GCD(int,int);
void main()
{
    int a,b,result;
    printf("enter two values to find gcd of them.......\n");
    scanf("%d%d",&a,&b);
    result=GCD(a,b);
    printf("gcd of two numbers=%d\n",result);
}
int GCD(int a,int b)
{
    if(b==0) return a;
    else return(GCD(b,a%b));
    
}
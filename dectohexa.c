#include<stdio.h>
#include<math.h>
void main()
{
    int a,rem,bin=0,i=0,hexa=0,j=1;
    printf("enter decimal number;");
    scanf("%d",&a);
    while(a>0)
    {
        rem=a%2;
        bin=bin+rem*pow(10,i);
        a=a/2;
        i++;
    }
    while(bin>0)
    {
        rem=bin%10;
        hexa=hexa+rem*j;
        j=j*2;
        bin=bin/10;
    }
    printf("%lx",hexa);
}
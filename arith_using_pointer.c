#include<stdio.h>
void main()
{
    int *a,*b,c=10,d=15;
    a=&c;
    b=&d;
    printf("%d\n",*a + *b);
    printf("%d\n",*a - *b);
    printf("%d\n",*a * *b);
    printf("%d\n",*a / *b);
    printf("%d\n",*a % *b);
    printf("%d\n",++*a);
    printf("%d",--*b);

}
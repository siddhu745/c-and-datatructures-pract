#include<stdio.h>
#include<math.h>
void roots(float *a,float *b,float *c);
void main()
{
    float a,b,c;
    printf("enter a,b,c values of quadratic equation:");
    scanf("%f%f%f",&a,&b,&c);
    roots(&a,&b,&c);
}
void roots(float *a,float *b,float *c)
{
    float a1=*a;
    float b1=*b;
    float c1=*c;
    float d,root1,root2;
    d = b1*b1-4*a1*c1;
    if(d==0)
    {
       root1=(-b1/(2*a1));
       printf("**it has one root\n%f",root1);
    }
    else if(d<0) printf("no real roots");
    else
    {
        root1=(-b1+sqrt(b1*b1-4*a1*c1))/(2.*a1);
        root2=(-b1-sqrt(b1*b1-4*a1*c1))/(2.*a1);
        printf("**it has two roots\n%f\n%f",root1,root2);
    }
}
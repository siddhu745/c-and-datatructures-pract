#include<stdio.h>
struct complex
{
    float real,imag;
}z1,z2;
void add(struct complex,struct complex);
void main()
{
    printf("in z1=x1+y1i & z2=x2+y2i\nenter x1,y1,x2,y2 respectively:\n");
    scanf("%f%f%f%f",&z1.real,&z1.imag,&z2.real,&z2.imag);
    add(z1,z2);
}
void add(struct complex z1,struct complex z2)
{
    struct complex z3;
    z3.real=z1.real+z2.real;
    z3.imag=z1.imag+z2.imag;
    printf("z1 + z2 = %.2f + %.2fi",z3.real,z3.imag);
}
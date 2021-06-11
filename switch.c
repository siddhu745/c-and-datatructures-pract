#include<math.h>
#include<stdio.h>



void main()
{
    int a,b,n;
    printf("enter values of a and b:");
    scanf("%d%d",&a,&b);
    printf("***select an operation in the menu***\n");
    printf("1=addition\n");
    printf("2=subtraction\n");
    printf("3=multiplication\n");
    printf("4=modulo division\n");
    printf("5=division\n");
    printf("6=power of a over b\n");
    scanf("%d",&n);
    switch (n)
    {
    case 1:printf("%d",a+b);
        break;
    case 2:printf("%d",a-b);
        break;
    case 3:printf("%d",a*b);
        break;
    case 4:printf("%d",a%b);
        break;
    case 5:printf("%d",a/b);
        break;
    case 6:printf("%lf",pow(a,b));
        break;
    default:printf("please select only the number in the menu");
        break;
    }
}
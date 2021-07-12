#include<stdio.h>
void main()
{
    int T;
    scanf("%d",&T);
    int a[10000];
    int N;
    int f;
    while(T--)
    {
        scanf("%d",&N);
        f = 2;
        int len = 1;
        a[0] = 1;
        int c = 0;
        int num = 0;
        while(f<=N)
        {
            c = 0;
            num = 0;
            while(c<len)
            {
                a[c] = a[c] * f;
                a[c] = a[c] + num;
                num = a[c] / 10;
                a[c] = a[c] % 10;
                c++;
            }
            while(num != 0)
            {
                a[len] = num % 10;
                num = num / 10;
                len++;
            }
            f++;
        }
        len--;
        while(len >= 0)
        {
            printf("%d",a[len]);
            len--;
        }

    }
}
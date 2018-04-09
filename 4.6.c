#include <stdio.h>//ì³²¨ÄÇÆõÊıÁĞ
int main ()
{
    int n;
    int i=0;
    int a=1;
    int b=1;

    scanf("%d",&n);

    while(i<(n-1))
    {
         a=a+b;
         b=a-b;
         i=i+1;
    }

    printf("f(n)=%d",a);
}


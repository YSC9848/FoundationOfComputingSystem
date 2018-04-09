#include<stdio.h>//交换ab的值，不引进新变量
int main()
{
    int a=7;
    int b=8;
    a=a^b;
    b=a^b;
    a=a^b;
    printf("%d %d",a,b);
}

#include<stdio.h>//����ab��ֵ���������±���
int main()
{
    int a=7;
    int b=8;
    a=a^b;
    b=a^b;
    a=a^b;
    printf("%d %d",a,b);
}

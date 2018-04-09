#include<stdio.h>//n£¡
int main()
{
    int result=1,i;
    scanf("%d",&i);
    while(i>1)
    {
        result=result*i;
        i--;
    }
    printf("%d",result);
}

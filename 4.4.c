#include<stdio.h>//判断一个月有几天
int main()
{
    int year,month;
    scanf("%d %d",&year,&month);
    if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
    printf("The month has 31 days.");
    else if(month==4||month==6||month==9||month==11)
    printf("The month has 30 days.");
    else if(month==2)
    {
        if(year%100==0)
        {
            if(year%400==0)
            printf("The month has 29 days.");
            else
            printf("The month has 28 days.");
        }
        else
        {
            if(year%4==0)
            printf("The month has 29 days.");
            else
            printf("The month has 28 days.");
        }
    }
}

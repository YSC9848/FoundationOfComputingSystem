#include<stdio.h>//计算二进制数中1的个数
int main()
{
    int i,j;
    int count=0;

    scanf("%d",&i);
    for(j=0;j<32;j++)
        {
            if(i&(1<<j))
                {
                    count++;
                }
        }
    printf("%d\n",count);
}

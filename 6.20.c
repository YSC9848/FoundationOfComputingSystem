#include<stdio.h>//���ð�λ�������ʮ����ת��Ϊ������
int main()
{
    int i,j,x;
    scanf("%d",&i);

    for(j=31;j>=0;j--)
        {
            if(i&(1<<j))
               x=1;
            else
               x=0;
            printf("%d",x);
        }
}

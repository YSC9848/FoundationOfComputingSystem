#include<stdio.h>//�������������1�ĸ���
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

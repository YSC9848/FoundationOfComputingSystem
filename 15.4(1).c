#include<stdio.h>

int f(int x,int y);

int main()
{
    int x;
    int y;
    int z;
    scanf("%d %d",&x,&y);
    z=f(x,y);
    printf("x^y=%d",z);
}
int f(int x,int y)
{
    int z=1;
    while(y>0)
        {
            z=z*x;
            y=y-1;
        }
}

#include <stdio.h>//¥÷À„pi÷µ
int main ()
{
    int i=2;
    int n;
    double pi=4.0;
    scanf("%d",&n);
    while(i<=n){
       if(i%2==0)
           pi=pi-4.0/(2*i-1);
       else
           pi=pi+4.0/(2*i-1);
       i=i+1;
    }
    printf ("pi=%.99f",pi);
}

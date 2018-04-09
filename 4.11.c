#include <stdio.h>//Èı½ÇÊıÕó
int main ()
{
    int n;
    int i=1;
    int x=1;

    printf("n=");
    scanf("%d",&n);

    while(i<=n)
    {
       do{
          printf("%d ",i);
          x=x+1;
       }while(x<=i);
       printf("\n");
       i=i+1;
       x=1;
    }
}

#include <stdio.h>
#define HANG 5
#define LIE 2
void change(int a[][LIE],int b[][HANG]);
int main(){
     int a[HANG][LIE];
     int b[LIE][HANG];
     int i,j;

     for(i=0;i<HANG;i++)
        {
            printf("Input %d numbers:",LIE);
            for(j=0;j<LIE;j++)
                scanf("%d",&a[i][j]);
        }

     change(a,b);

     for(i=0;i<LIE;i++)
        {
            for(j=0;j<HANG;j++)
                printf("%d ",b[i][j]);
            printf("\n");
        }
}
void change(int a[][LIE],int b[][HANG])
{
     int i,j;

     for(i=0;i<LIE;i++)
        {
            for(j=0;j<HANG;j++)
                b[i][j]=a[j][i];
        }
}

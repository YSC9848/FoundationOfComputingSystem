#include<stdio.h>
#define FALSE 0
#define TRUE 1

 int main()
 {
     char ch;
     int gotI=FALSE;
     int gotIN=FALSE;
     int count=0;

     do{
            scanf("%c",&ch);

            switch(ch)
            {
                case'i':
                    gotI=TRUE;
                    gotIN=FALSE;
                break;

                case'n':
                    if(gotI)
                        gotIN=TRUE;
                    if(gotIN)
                        gotIN=TRUE;
                    gotI=FALSE;
                break;

                case't':
                    if(gotIN)
                        count++;
                break;

                default:
                    gotI=FALSE;
                    gotIN=FALSE;
            }
       }while(ch!='\n');

       printf("%d",count);
 }

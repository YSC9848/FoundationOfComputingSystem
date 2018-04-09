#include <stdio.h>
char *StrCar(char *input1,char *input2);

int main()
    {
       char input1[20];
       char input2[10];

       printf("Input the first string(less than 10 words):");
       scanf("%s",input1);
       printf("Input the second string(less than 10 words):");
       scanf("%s",input2);

       printf("The result is %s",StrCar(input1,input2));
    }

char *StrCar(char *input1,char *input2)
    {
       int i=0,j;

       while(input1[i]!=0)
          i++;
        for(j=0;j<10;j++)
            {
                input1[i]=input2[j];
                i++;
            }
       return input1;
    }

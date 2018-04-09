#include <stdio.h>
char *StrCar(char *input1,char *input2);

int main()
    {
       char input1[10];
       char input2[10];

       printf("Input the first string(less than 10 words):");
       scanf("%s",input1);
       printf("Input the second string(less than 10 words):");
       scanf("%s",input2);

       printf("The result is %s",StrCar(input1,input2));
    }

char *StrCar(char *input1,char *input2)
    {
       int j;

       for(j=0;j<10;j++)
            {
                input1[j]=input2[j];
            }
       return input1;
    }

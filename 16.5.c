#include<stdio.h>
int main()
{
    char str[30];
    int i,n;

    printf("Input a string(less than 30 words):");
    scanf("%s",str);

    printf("Input a number:");
    scanf("%d",&n);

    if(n>=1&&n<=9)
        {
            for(i=0;i<=19;i++)
            {
                if(str[i]>(126-n)&&str[i]<=127)
                    str[i]=str[i]-(94-n);
                else if(str[i]<=(126-n)&&str[i]>=0)
                    str[i]=str[i]+n;
            }
        printf("%s",str);
        }
    else
        printf("Error!");
}

#include<stdio.h>//ת��Ϊ��д
int main()
{
    char letter;
    do{
        scanf("%c",&letter);
        if(letter>=97&&letter<=122)
            printf("%c",letter-32);
        else
            printf("%c",letter);
    }while(letter!='\n');
}

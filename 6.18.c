#include <stdio.h>//È¡Ïû¿Õ¸ñ¼ü
int main (){

    char sntnc;

    printf("Enter your sentance:");
    do{
        scanf("%c",&sntnc);

        if(sntnc!=32){
           printf("%c",sntnc);
        }
    }while(sntnc!='\n');
}

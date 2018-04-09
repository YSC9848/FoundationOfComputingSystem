#include<stdio.h>//输出一些数
   int main()
   {
       char number='8';
       char nL='\n';
       double twoHundredTen=2.1e2;
       double threeThousand=3e3;
       double fiveTenth=5e-1;
       double minusFiveTenths=-5e-1;

       printf("%c%c\n",number,nL);
       printf("%f,%f,%f,%f \n", twoHundredTen,threeThousand,fiveTenth,minusFiveTenths);

   }

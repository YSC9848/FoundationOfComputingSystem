#include <stdio.h>

int func(int x);

int main (){
      int i,result;

      for(i=1;i<100;i++){
		  result=func(i);
         if (result)
             printf("%d ",i);
      }
}

int func(int x){
       int i,result;
       for(i=2;i<=(x/2);i++){
           if(x%i==0){
               result=0;
			   break;
               }
            else
		       result=1;
	   }
	   return result;
}
           
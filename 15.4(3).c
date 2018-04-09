#include <stdio.h>

double func(int x,int n);

int main(){
       double y;
	   int n,x;

       printf("x=");
       scanf("%d",&x);
	   printf("n=");
	   scanf("%d",&n);

       y=func(x,n);

       printf("%f is the square root of x",y);
}

double func(int x,int n){
       double y=1.0;
	   int i;

	   for(i=1;i<=n;i++){
		   y=(y+x/y)/2.0;
	   }

	   return y;
}






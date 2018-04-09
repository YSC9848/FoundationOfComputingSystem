#include <stdio.h>
void f(int n,int i);
int main()
{
     int n;
	 int i=0;

     printf("number:");
     scanf("%d",&n);

	 f(n,i);
}

void f(int n,int i)
{
	    int k;

        i++;
	    if(n==0){
			for(k=0;k<(32-i);k++)
				printf("0");
            printf("0");
		}
        else if(n==1){
			for(k=0;k<(32-i);k++)
				printf("0");
            printf("1");
		}
        else{
			if(n%2){
				f((n-1)/2,i);
                printf("1");
            }
			else{
			  f(n/2,i);
              printf("0");
			}
        }
}

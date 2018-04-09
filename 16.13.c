#include <stdio.h>
#include <string.h>
#define n 10

int main(){
      int i,j,m;
      char a[n+1][20];
	  char b[20]="  ";

      for(i=0;i<n;i++)
      {
          printf("Give %d string(less than 10 characters):",n);
          scanf("%s",a[i]);
      }

      for(i=0;i<(n-1);i++){
          for(j=(i+1);j<n;j++){
              if(strcmp(a[i],a[j])==0){
                 for(m=j;m<(n-1);m++)
                     strcpy(a[m],a[m+1]);
                 strcpy(a[n-1],b);
              }
           }
       }

       for(i=0;i<n;i++)
           printf("%s\n",a[i]);
}



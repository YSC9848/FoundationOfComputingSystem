#include <stdio.h>
#define MAX 10
int main ()
{
    int nums[MAX];
    int i,j,m,k=MAX;

    printf("give %d numbers:",k);

        for(i=0;i<MAX;i++)
            {
                scanf("%d",&nums[i]);
            }




        for(i=0;i<(k-1);i++)
            {
             for(j=i+1;j<=k;j++)
                {
                   if(nums[i]==nums[j])
                    {
                       for(m=j;m<(k-1);m++)
                            nums[m]=nums[m+1];
                       k--;
                   }
                }
            }

         for(i=0;i<k;i++)
              printf("%d ",nums[i]);
}

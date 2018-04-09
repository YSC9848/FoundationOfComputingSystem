#include<stdio.h>//µ•ŒªªªÀ„second to hour
int main()
{
  int hour;
  int minute;
  int second;

  scanf("%d",&second);
  hour=second/3600;
  minute=(second-3600*hour)/60;
  second=second%60;

  printf("The time is %d hour %d minute %d second.", hour, minute, second);

}

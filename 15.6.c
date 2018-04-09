#include <stdio.h>

int func (int x);

int main(){
	int x,y,m,n;

	printf("Input x and y ");
	scanf("%d%d",&x,&y);
	if(x>=2&&x<=9&&y>=2&&y<=9)
	{
	for(m=func(x);m<func(x+1);m++){
		for(n=func(y);n<func(y+1);n++){
			printf("%c%c ",m,n);
		}
	}
}
else
printf("error!");
}

int func(int x){
	int result;
	switch(x){
		case 2:
			result='a';
			break;
		case 3:
		    result='d';
			break;
		case 4:
			result='g';
			break;
		case 5:
			result='j';
			break;
		case 6:
			result='m';
			break;
		case 7:
			result='p';
			break;
		case 8:
			result='t';
			break;
		case 9:
			result='w';
			break;
	}
	return result;
}

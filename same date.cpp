#include<stdio.h>
#include<string.h>

struct dates {
	int day;
	int month;
	int yaer;
}x,y;

int main(){
	char c;
	printf("enter date 1 (example: 1-3-2013) :");
	scanf("%d%c%d%d",&x.day,&c,&x.month,&c,&x.yaer);
	printf("enter date 2 (example: 1-3-2013) :");
	scanf("%d%c%d%d",&y.day,&c,&y.month,&c,&y.yaer);
	
	if(x.day==y.day && x.month==y.month && x.yaer==y.yaer){
		printf("dates are same!");
	}
	else 
	printf("dates are not equal.");
}

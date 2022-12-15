#include<stdio.h>
#include<string.h>

struct date {
	int day;
	int month;
	int year;
}x;

void fun (int i){
	x.day=x.day+i;
	i=x.day-31;
	if (i>0){
		x.month=x.month+(i/31)+1;
		if (x.month>12){
			x.year=x.year+1;
			x.month=x.month-12;
		}
		x.year=x.year+(i/365);
		if (i<31){
			x.day=i;
		}
		else{
			x.day=i%31;
		}
	}
	printf("new date : %d-%d-%d ",x.day,x.month,x.year);
}

int main(){
	int i;
	char c;
	printf("enter current date: ");
	scanf("%d%c%d%c%d",&x.day,&c,&x.month,&c,&x.year);
	printf("do you want to add days to the date?");
	scanf(" %c",&c);
	if (c=='y'){
	    printf("enter days: ");
	    scanf("%d",&i);
	    fun(i);
	}
}

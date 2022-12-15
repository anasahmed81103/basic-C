#include<stdio.h>

int main(){
	
	int d,m;
	printf("lets see if your going to sleep in..\n");
	printf("What day of the week is it?(1-7)\n");
	scanf("%d",&d);
	if (d>7 || d<0) 
	printf("no such day!");
	else{
	printf("What month is this?(1-12)\n");
	scanf("%d",&m);
	if (m>12 || m<0)
	printf("no such month");
	else{
	char c1,c2,c3;
	c1=d>5? (d<8? 'a': 'b'):'b';
	c2=m>5?(m<8?'a':'b'):'b';
	if(c1=='a' && c2=='a') 
	printf("true");
	else
	 printf("false");
}
}
	
	
	
	
	
	
	
	
	
	
}

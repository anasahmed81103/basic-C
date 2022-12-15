#include<stdio.h>

int main(){
	
	printf("We will see if a number is divisible by 7\n");
	int num,last;
	printf("enter num\n");
	scanf("%d",&num);
	
	while (num/10 > 0){
		last=num%10;
		num=(num-last)/10;
		num=num-last*2;
		if (num<0) 
		num=-num;
	}
	if (num==7 || num==0 || num==-7)
	    printf("number is divisible by 7");
	else printf("number is not divisible by 7");    
	
	
	
	
	
	
	
	
	
	
	
	
}

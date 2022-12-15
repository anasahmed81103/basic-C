#include<stdio.h>

int main(){
	
	int i=0, num[]={0},sum=0;
	char yn;
	printf("want to input number?\n");
	scanf(" %c",&yn);
	while (yn=='y'){
		printf("enter no. :");
		scanf("%d",&num[i]);
		sum=sum+num[i];
		printf("want to input number?\n");
	    scanf(" %c",&yn);
	    num[i]++;
	}
	
	printf("sum = %d",sum);
	
	
	
	
	
	
	
	
	
	
}

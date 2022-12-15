#include<stdio.h>

int main(){
	
	int n;
	double f=1.0;
	printf("We are going to calculate the factorial of a number\n ");
	printf("Give me a number:");
	scanf("%d",&n);
	if (n<0){
		printf("error, input a positive number\n");
		}
	else{
	while (n>0){
		f=f*n;
		n--;
	}
	printf("factorial of given no: %.2f",f);
}
	
	
	
	
	
	
	
	
	
	
	
}

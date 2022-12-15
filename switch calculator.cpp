#include<stdio.h>
#include<math.h>

int main(){
	
	float num1,num2,res; char op;
	printf("SIMPLE CALCULATOR\n");
	printf("-----------------\n");
	printf("enter: num1 , (+,-,*,/) , num2\n");
	scanf(" %f %c %f",&num1,&op,&num2);
	printf("%.2f %c %.2f = ",num1,op,num2);
	
	switch (op){
		case '+':
			res=num1+num2;
			printf("%f",res);
			break;
		case '-':
			res=num1-num2;
			printf("%f",res);
			break;
		case '*':
			res=num1*num2;
			printf("%f",res);
			break;
		case '/':
			if (num2!=0){
			res=num1/num2;
			printf("%f",res);}
			else printf("Infinity");
			break;
		default:
			printf("\n invalid operator..");
	}
	
	
	
	
	
	
	
	
}

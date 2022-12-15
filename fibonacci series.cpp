#include<stdio.h>

int main(){
	
	int a,b,c,sum=0;
	a=1;
	b=1;
	printf("Fibonachi series uptill 1000\n");
	printf("With while loop\n\n");
	printf("%d ,",a);
	printf("%d ,",b);
	while (a+b<=1000){
		c=a+b;
		printf("%d ,",c);
		if (c%3==0 || c%5==0 || c%7==0){
			sum=sum+c;
		}
		a=b;
		b=c;
		
	}
	printf("\n**************************************\n");
	printf("\nsum = %d\n",sum);
	printf("\n************************************\n");
	printf("with for loop\n\n");
	printf("1 ,1 ,");
	for( a=1,b=1 ; a+b<=1000 ; a=b,b=c ){
		c=a+b;
		printf("%d ,",c);
	}
	printf("\n\nwhile is better in this case");
	//while is better in this case
	
	
	
	
	
	
	
}

#include<stdio.h>

int main(){
	
	int price,years;
	float perc,inter;
	
	printf("CALCULATING INTEREST ON PHONE\n");
	printf("what is the original price of phone?\n");
	scanf("%i", &price);
	printf("price= %i Rs\n",price);
	printf("what is the interest rate?\n");
	scanf("%f", &perc);
	printf("interest rate= %.3f %\n",perc);
	printf("how many years have the installments taken?\n");
	scanf("%i", &years);
	printf("years= %i\n",years);
	inter=(price/100)*perc*years;
	printf("interest = %.3f",inter);
	
	
	
	
	
	
	
	
	
	
	
}

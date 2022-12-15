#include<stdio.h>
#include<math.h>

int main(){
	
	int days, ydays;
	int years,weeks;
	printf("Give me numbr of days...\n");
	scanf("%d", &days);
	years=(days/365);
	weeks= (days-(years*365))/7;
	ydays= days-((years*365)+(weeks*7));
	printf("%d years, %d weeks and %d days\n",years,weeks,ydays);

	
	
	
	
	
	
	
	
	
}

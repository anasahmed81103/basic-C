#include<stdio.h>

int main(){
	
	float c,f,fc,perc;
	
	printf("What is the amount calories in your food?\n");
	scanf("%f", &c);
	if (c<0)
	printf("invalid opeation");
	else
	printf("What is the amount of fat (in gram) in your food? \n");
	scanf("%f", &f);
	if (f<0)
	printf("invalid amount of fat");
	fc=f*9;
	printf(" total calories = %.2f \n fat in gm = %.2f \n calories from fat = %.2f \n",c,f,fc);
	if (fc>c)
	printf("impossible!!..either no of calories or no. of fat is incorrect");
	else
	perc=(fc/c)*100;
	printf("percentage of fat in food = %.2f\n ",perc);
	if (perc<30)
	printf("Food is low in fat\n");
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}

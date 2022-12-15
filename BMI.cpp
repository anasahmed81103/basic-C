
#include<stdio.h>
#include<math.h>

int main(){
	
	float w,h,bmi;
	printf("BMI CALCULATOR\n");
	printf("your weight? (in kgs)\n");
	scanf("%f",&w);
	printf("your height?(in metres)\n");
	scanf("%f",&h);
	bmi=w/(h*h);
	printf("BMI = %.2f ",bmi);
	if (bmi<18.5){
		printf("Underweight..");
	}
	else if (18.5<bmi<24.9){
		printf("Normal..");
	}
	else if (25<bmi<29.9){
		printf("Overweight..");
	}
	else if (bmi>30){
		printf("Obese..");
	}
	else{
		printf("BMI error...");
	}
	
	
	
	
	
	
	
	
	
}

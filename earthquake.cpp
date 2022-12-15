#include<stdio.h>

int main(){
	
	//problem cannot be solved with a switch statement because the value of richter scale is variable and not constant
	
	printf("The National Earthquake Information Center\n");
	printf("__________________________________________\n");
	printf("An earthquake has been recorded..:o\n");
	printf("what was its richter scale reading?\n");
	float r;
	scanf("%f",&r);
	if(r<5.0)
	printf("Little or no damage done");
	else if (r>5.0 && r<5.5)
	printf("Some damage");
	else if (r>5.5 && r<6.5)
	printf("Serious damage! walls may crack or fall..");
	else if (r>6.5 && r<7.5)
	printf("Disaster!! : Houses and buildings may collapse..");
	else
	printf("Catastrophe!!! : most buildings destroyed..");
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}

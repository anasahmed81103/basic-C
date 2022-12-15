#include<stdio.h>
#include<math.h>

int main(){
	
	float tem,temp;
	char ch;
	 printf("TEMPERATURE CONVERTER\n");
	 printf("=====================\n");
	 printf("Do u want to convert Celcius or Fahrenheit\n");
	 scanf("%c",&ch);
	 printf("Enter temperature..\n");
	 scanf("%f",&tem);
	 
	switch (ch){
		
		case 'c':
		case 'C':	
			temp=(tem+32)*9/5;
			printf("celcius = %f \n fahrenheit = %f",tem,temp);
			break;
			
		case 'f':
		case 'F':
			temp=(tem-32)*5/9;
			printf("fahrenheit = %f \n celcius = %f ",tem,temp);
			break;
		default :
			printf("Invalid action. Press 'c' or 'f'");
}
		
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	


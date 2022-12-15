#include<stdio.h>

int main(){

	int dis;
	float lit,cons;
	
	printf("CALCULATING BIKE'S CONSUMPTION OF FUEL\n");
	printf("what is the distance traveled?\n");
	scanf("%i", &dis);
	printf("distance = %i km\n", dis);
	printf("how much fuel is spent?\n");
	scanf("%f", &lit);
	printf("fuel spent = %.3f lit\n",lit);
	cons=dis/lit;
	printf("the fuel consumption of bike = %.3f km/lit",cons);
	
	
	
	
}

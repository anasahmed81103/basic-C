#include<stdio.h>

int main(){
	
	int a,b,c;
	printf("Give me the sides of a triangle (a,b,c)\n");
	scanf("%d", &a );
	scanf("%d", &b );
	scanf("%d", &c );
	
	if (a==b && a==c)
	printf("Triange is Equilateral");
	else if (a==b || a==c || b==c)
	printf("Triange is Isosceles");
	else printf("Triangle is Scalene");
	
	
	
	
	
	
	
	
	
	
}

#include<stdio.h>

int main(){
	
	int h,w,p,a;
	printf("we are going to calculate area and perimeter\n");
	printf("what is the height of rectangle?\n");
	scanf("%i", &h);
	printf("height= %i\n",h);
	printf("what is the width?\n");
	scanf("%i", &w);
	printf("width= %i\n",w);
	p= 2*(h+w);
	a= h*w;
	printf("perimeter = %i\n",p);
	printf("area = %i\n",a);
	
	
	
	
}

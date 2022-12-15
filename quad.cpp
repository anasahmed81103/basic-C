#include<stdio.h>
#include<math.h>

int main(){
	
	
	float a,b,c;
	float r,x,x1,x2;
	
	printf("calculating roots of quadratic equation\n");
	printf("what are a,b,c?\n");
	scanf("%f", &a);
	printf("a= %.1f\n", a);
	scanf("%f", &b);
	printf("b= %.1f\n", b);
	scanf("%f", &c);
	printf("c= %.1f\n",c);
	x=(b*b)-(4*a*c);
	if (x>=0){
		r=sqrt(x);
		x1=(b+r)/(2*a);
		x2=(-b+r)/(2*a);
	    printf("x1 = %f \n",x1);
	    printf("x2 = %f",x2);
	
	}
	else {
		printf("error..value has iota");
	}
	 
	
	
	
	
	
	
	
}

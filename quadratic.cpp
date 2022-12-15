#include<math.h>
#include<stdio.h>

int main(){
	
	
	int a,b,c;
	double r,r2,x1,x2;
	
	printf("calculating quadratic formula\n");
	printf("what are a,b,c?\n");
	scanf("%i", &a);
	printf("a= %i\n", a);
	scanf("%i", &b);
	printf("b= %i\n", b);
	scanf("%i", &c);
	printf("c= %i\n",c);
	r= (b*b)-4*a*c;
	r2= sqrt(r);
	x1= (b+r2)/2*a;
	x2= (-b+r2)/2*a;
	printf("x1=%lf\n",x1);
	printf("x2=%lf\n",x2);
	
	
	
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	


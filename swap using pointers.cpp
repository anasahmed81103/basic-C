#include<stdio.h>
#include<math.h>
#include<string.h>

void swaped (int *a,int *b,int *c);

int main (){
	int a=1,b=2,c=3;
	printf("a=%d\nb=%d\nc=%d",a,b,c);
	swaped(&a,&b,&c);
	printf("\n\na=%d\nb=%d\nc=%d",a,b,c);
}
void swaped (int *a,int *b,int *c ){
	int p;
	p=*b;
	*b=*a;
	*a=*c;
	*a=p; 
}

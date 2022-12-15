#include<stdio.h>
#include<math.h>
#include<string.h>

int getdata (void);
void volumecalu(float a,float h);

int main(){
	getdata();
}

int getdata (void){
	float h,a;
	printf("enter length of base :");
	scanf("%f",&a);
	printf("enter height :");
	scanf("%f",&h);
	volumecalu(a,h);
}
void volumecalu(float a,float h){
	float volume= (a*a)*(h/3);
	printf("volume : %.2f",volume);
}


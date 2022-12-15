#include<stdio.h>
#include<math.h>
#include<string.h>

int input(void);
void swap (int a, int b);

int main (){
	input();
}

int input (void){
	int a,b;
	printf("enter n1: ");
	scanf("%d",&a);
	printf("enter n2: ");
	scanf("%d",&b);
	swap(a,b);
}
void swap(int a,int b){
	printf("n1 = %d ",b);
	printf("n2 = %d ",a);
}

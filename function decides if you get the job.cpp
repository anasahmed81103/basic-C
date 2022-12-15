#include<stdio.h>
#include<math.h>
#include<string.h>

void criteria (int a, int b){
	if (a>=50 && a<=60 && b>=0){
		printf("Selected as Trainee engineer!");
	}
	else if(a>60 && a<70 && b>=1){
		printf("Selected as Assistant developer!");
	}
	else if(a>70 && b>=2){
		printf("Selected as Assistant developer!");
	}
}

int main(){
	int a,b;
	printf("sales flow ore hiring. Following positions are available\n1)Associate Developer\n2)Assistant developer\n3)Trainee Engineer\n");
	printf("enter test scores: ");
	scanf("%d",&a);
	printf("enter experience: ");
	scanf("%d",&b);
	criteria (a,b);
}

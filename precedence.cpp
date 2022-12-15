#include<stdio.h>
#include<math.h>

int main(){
	
	char ch;
	float x;
	printf("Here are some equations: \n a) x = 7+3*6/2-1; \n b) x = 2%%2+2*2-2/2; \n c) x = (3*9(3+(9*3/(3))));\n");
	printf("Which operation do u want to perform? (a,b,c)\n");
	scanf("%c",&ch);
	
	if (ch=='a'){
		x = 7+3*6/2-1;
		printf("x = %.2f",x);
		//first 3*6=18, than 18/2=9, than 7+9=16, than 16-1=15// 
	}
	else if (ch=='b'){
		x = 2%2+2*2-2/2;
		printf("x = %.2f",x);
		//first 2%2=0, than 2*2=4, than 2/2=1, than 4+0=4, than 4-1=3//
	}
	else if (ch=='c'){
	    x = (3*9*(3+(9*3/(3))));
	    printf("x = %.2f",x);
	    //first 9*3=27, than 27/3=9, than 9+3=12, than 12*9*3=325//
	}
	else {
		printf("no such equation...");
	}
	
	
	
	
	
	
	
	
	
}

#include<stdio.h>
#include<math.h>

int main()
{

	int nu1,nu2;
	float num1,num2;
	float mult,div,add,sub,rem;
	char opr;
	
	printf("what operation do u want to perform( + , - , * , / , %% )\n");
	scanf("%c",&opr);
	printf("oper= %c\n",opr);
	printf("We will perform a mathematical operation b/w two numbers...\n");
	printf("give me two numbers...\n");
	if (opr=='%'){
		scanf("%d",&nu1);
		scanf("%d",&nu2);
		printf("num1= %d\n",nu1);
		printf("num2= %d\n",nu2);
	}
	else {
		scanf("%f",&num1);
	scanf("%f",&num2);
	printf("num1= %.1f\n",num1);
	printf("num2= %.1f\n",num2);
	}
	
    
    if (opr=='+'){
    	add=num1+num2;
    	printf("sum= %f",add);
	}
    else if (opr=='-'){
    	if (num2>num1){
    		printf("operation not possible...");
		}
		else
		sub=num1-num2;
		printf("difference= %f",sub);
	}
	else if (opr=='*'){
		mult=num1*num2;
		printf("product= %f",mult);
	}
	else if (opr=='/'){
		div=num1/num2;
		printf("quotient= %f",div);
	}
	else if (opr=='%'){
		if (num2>num1){
			printf("operation not possible...\n");
		}
		else
		rem=nu1%nu2;
		printf("remainder= %f",rem);
	}
	else 
	printf("invalid operation");
	
	
	
	
	
	
}

#include<stdio.h>

int main(){
	
	int n,o=0,e=0,d=1;
	float avg=0.0;
	printf("Enter a number greater than 10\n");
	do{
		scanf("%d",&n);
		if(n<10){
			break;
		}
		else{
		if (n%2==0){
			e++;
		}
		else if (n%2!=0){
			o++;
		}
		avg=(avg+n)/d;
		d++;
		printf("Average= %.2f\n",avg);
		printf("odd no.'s = %d\n",o);
		printf("even no.'s = %d\n",e);
		printf("***********************\n");
	}
	}while(1);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}

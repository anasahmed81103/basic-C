#include<stdio.h>

int main(){
	
	int i=0,num[1000]={0};
	printf("enter 0 to stop input\n");
	do{
		printf("enter no.");
		scanf("%d",&num[i]);
		if(num[i]==0){
			break;
		}
		i++;
	}while(1);
	
	for (i ; i>=0 ; i--){
		if(num[i]==0){
			continue;
		}
		printf("%d ,",num[i]);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
}

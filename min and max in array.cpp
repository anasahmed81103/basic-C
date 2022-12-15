#include<stdio.h>

int main(){
	
	int n,g,s;
	printf("how many numbers do you want to input?\n");
	scanf("%d",&n);
	int num[n];
	
	for(int i=1;i<=n;i++ ){
		printf("enter no. :");
		scanf("%d",&num[i]);
		if(num[i]==num[0]){
			g=num[i];
			s=num[i];
		}
		else{
		if (num[i]>g){
			g=num[i];
		}
		if (num[i]<s){
			s=num[i];
		}
	}
	}
	
	printf("\nMax= %d & Min= %d",g,s);
	
	
	
	
	
	
	
	
	
}

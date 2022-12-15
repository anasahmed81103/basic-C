#include<stdio.h>

int main(){
	
	int n,l;
	
	printf("enter no: ");
	scanf("%d",&n);
	
	printf("enter length of array: ");
	scanf("%d",&l);
	
	int sum=0,arr[l],i,j;
	
	for(i=0;i<l;i++){
		printf("enter element %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	
	for (i=0;i<l;i++){
		if (n==arr[i]){
			printf("%d",i);
		}
		for (j=i; j<l;j++){
			sum=sum+arr[j];
			if(sum==n){
				printf("from %d to %d",i+1,j+1);
				break;
			}
		}
		if(sum==n){
			break;
		}
		sum=0;
	}
	
	
	
	
	
	
	
	
	
	
}

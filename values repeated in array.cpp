#include<stdio.h>

int main(){
	
	int n;
	printf("Enter no. of elementd in array: ");
	scanf("%d",&n);
	int arr[n-1],i,d;
	
	for (i=0;i<n;i++){
		printf("enter %d num: ",i+1);
		scanf("%d",&arr[i]);
	}
	
	for(i=1,d=0;d<n;i++){
		if (arr[d]==arr[d+i]){
			printf("%d is more than one time\n",arr[d]);
		}
		if (i==n-1){
			d++;
			i=1;
		}
	}
	
	
	
	
	
	
	
	
	
	
}

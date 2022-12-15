#include<stdio.h>
#include<math.h>
#include<string.h>

int max(int n,int arr[]){
	int max,i;
	max=arr[0];
	for (i=0;i<n;i++){
		if(arr[i]>max)
		max=arr[i];
	}
	return max;
}

int min(int n, int arr[]){
	int min,i;
	min=arr[0];
	for (i=0;i<n;i++){
		if(arr[i]<min)
		min=arr[i];
	}
	return min;
}

int main(){
	int i,n;
	printf("enter no. of elements in array :");
	scanf("%d",&n);
	int arr[n];
	for (i=0;i<n;i++){
		printf("enter %d element: ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("number of values input: %d\nmax: %d\nmin: %d",n,max(n,arr),min(n,arr));
}

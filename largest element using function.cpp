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

int main(){
	int i,n;
	printf("enter no. of elements in array :");
	scanf("%d",&n);
	int arr[n];
	for (i=0;i<n;i++){
		printf("enter %d element: ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("largest element in array is %d",max(n,arr));
}

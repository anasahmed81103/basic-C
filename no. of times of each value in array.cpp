#include<stdio.h>
#include<string.h>
#include<math.h>

void countfrequency(int a,int arr[]){
	int i,j,cnt[11]={0};
	for(i=0;i<a;i++){
		for (j=0;j<=10;j++){
			if (arr[i]==j)
			cnt[j]++;
		}
	}
	for (i=0;i<11;i++){
		printf("%d occurs %d times\n",i,cnt[i]);
	}
}

int main(){
	int n,i;
	printf("Enter no. of elements in array: ");
	scanf("%d",&n);
	int array1[n];
	printf("enter values of array :");
	for (i=0;i<n;i++){
		scanf("%d",&array1[i]);
		
	}
	countfrequency(n,array1);
	
}

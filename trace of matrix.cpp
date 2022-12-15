#include<stdio.h>

int main(){
	
	int a,b,sum=0,i,j;
	printf("enter dimensions of square matrix (ex: 5 5):  ");
	scanf("%d %d",&a,&b);
	
	int arr[a][b];
		for(i=0;i<a;i++){
		for (j=0;j<b;j++){
			printf("enter element [%d,%d]: ",i+1,j+1);
			scanf("%d",&arr[i][j]);
		}
	}
	
	for(i=0;i<a;i++){
		sum=sum+arr[i][i];
	}
	printf("trace of matrix=%d",sum);
	
	
	
	
	
	
	
}

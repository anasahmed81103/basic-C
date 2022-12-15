#include<stdio.h>

int main(){
	
	int r,c;
	printf("enter no. of columns: ");
	scanf("%d",&c);
	printf("enter no. of rows: ");
	scanf("%d",&r);
	
	int arr[r][c],i,j;
	
	for(i=0;i<r;i++){
		for (j=0;j<c;j++){
			printf("enter element [%d,%d]: ",i+1,j+1);
			scanf("%d",&arr[i][j]);
		}
	}
	
	printf("\n");
	
	for (j=0;j<c;j++){
		for (i=0;i<r;i++){
			printf(" %d",arr[i][j]);
		}
		printf("\n");
	}
	
	
	
	
	
	
	
	
	
}

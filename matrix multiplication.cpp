#include<stdio.h>

int main(){
	
	int r1,c1;
	printf("enter no. of columns of matrix a: ");
	scanf("%d",&c1);
	printf("enter no. of rows of matrix a: ");
	scanf("%d",&r1);
	
	int arr1[r1][c1],i1,j1;
	
	for(i1=0;i1<r1;i1++){
		for (j1=0;j1<c1;j1++){
			printf("enter element [%d,%d]: ",i1+1,j1+1);
			scanf("%d",&arr1[i1][j1]);
		}
	}
	
	int r2,c2;
	printf("enter no. of columns of matrix b: ");
	scanf("%d",&c2);
	printf("enter no. of rows of matrix b: ");
	scanf("%d",&r2);
	
	int arr2[r2][c2],i2,j2;
	
	for(i2=0;i2<r2;i2++){
		for (j2=0;j2<c2;j2++){
			printf("enter element [%d,%d]: ",i2+1,j2+1);
			scanf("%d",&arr2[i2][j2]);
		}
	}
	
	int a,i,j;
	
	for (i=0;i<r1;i++){
		for (j=0;j<c1;j++){
			a=arr1[i][j]*arr2[i][j];
			printf("  %d",a);
		}
		printf("\n");
	}
	
	
	
	
	
	
	
	
	
}

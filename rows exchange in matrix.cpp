#include<stdio.h>

int main(){
	
	int r,i,c,j,r1,r2,array[3][3]={1,2,3,4,5,6,7,8,9};
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf(" %d",array[i][j]);
		}
		printf("\n");
	}
	
	printf("enter rows to be exchanged(ex 1 3): ");
	scanf("%d %d",&r1,&r2);

	for(i=0;i<3;i++){
		c=i;
		for(j=0;j<3;j++){
			if(i+1==r1){
				i=r2-1;
			}
			else if(i+1==r2){
				i=r1-1;
			}
			printf(" %d",array[i][j]);
		}
		printf("\n");
		i=c;
	}
	
	
	
}

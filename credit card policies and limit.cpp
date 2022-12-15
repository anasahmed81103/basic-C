#include<stdio.h>

int main(){
	
	double acc;
	int i,prod;
	float chr,tot,cred,crdlim,bal,balf;
	printf("Enter account no: ");
	scanf("%ld",&acc);
	printf("Enter beginning balance :");
	scanf("%f",&bal);
	printf("How many products would you like to enter (bought this month): ");
	scanf("%d",&prod);
	for(i=1;i<=prod;i++){
		printf("Enter charges for item %d : ",i);
		scanf("%f",&chr);
		tot=tot+chr;
	}
	printf("\nYour total = %.2f \n",tot);
	printf("Enter total credit: ");
	scanf("%f",&cred);
	printf("Enter credit limit : ");
	scanf("%f",&crdlim);
	balf=bal-tot+cred;
	printf("\n*******************************************\n");
	printf("Account : %.2ld\n",acc);
	printf("Credit limit : %.2f\n",crdlim);
	printf("Balance : %.2f\n",balf);
	if (crdlim<(tot-cred)){
		printf("credit limit exceeded by %.2f\n",crdlim-tot);
	}
	else {
		printf("Credit limit not exceeded\n");
	}
	
	
	
	
	
	
	
}

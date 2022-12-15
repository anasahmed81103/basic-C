#include<stdio.h>

int main(){
	
	int i,m,f=0,p=0,ex=0,abavg=0;
	printf("Calculating report\n Enter marks of students out of 100\n");
	for (i=1;i<=25;i++){
		printf("ENTER :");
		scanf("%d",&m);
		if(m>100){
			printf("Nigga plz dont lie\n");
		}
		else if(m<50){
			printf("Fail\n");
			f++;
		}
		else if(m>=50){
			printf("Pass\n");
			p++;
		}
		if (m>=86){
			ex++;
		}
		if (m>70 && m<86){
			abavg++;
		}
	}
	printf("PASS = %d students\n",p);
	printf("FAIL = %d students\n",f);
	printf("Excellent = %d students\n",ex);
	printf("Above Average = %d students\n",abavg);
	
	
	
	
	
	
	
	
	
	
	
}
	


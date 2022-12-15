#include<stdio.h>

int main(){
	
	int bs=61000,name[50],me,ms,tot;
	printf("          Calculating net salaries of sales person\n\n");
	printf("                       NEO SHOWROOM                \n\n");
	printf(" enter base salary less than 60000 to end program\n");
	while (bs>=60000){
		printf("Enter name: ");
		scanf(" %s",&name);
		printf("Enter base salary: ");
		scanf("%d",&bs);
		printf("Enter monthly sales: ");
		scanf("%d",&me);
		if (me<10000000){
			ms=(me/100)*2;
		}
		else if (me>=10000000){
			ms=(me/100)*3.5;
		}
		tot=ms+bs;
		printf("Net salary: %d\n",tot);
		printf("***********************************************************************\n");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
}

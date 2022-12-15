#include<stdio.h>

int main(){
	
	float nts,fsc,perf,pern;
	printf("ADMISSION SEAT CHECK\n");
	printf("--------------------\n");
	printf("Enter F.Sc Marks (out of 1100): ");
	scanf("%f",&fsc);
	printf("Enter NTS marks (out of 200):");
	scanf("%f",&nts);
	perf= ((fsc/1100)*100);
	pern=((nts/200)*100);
	printf("F.Sc % = %.2f %\n",perf);
	printf("NTS % = %.2f %\n",pern);
	
	if (perf>70.0 && pern>70.0)
	printf("Oxford University: 'IT' Seat Available..\n");
	if (perf>70.0 && pern>60.0)
	printf("Oxford University: 'Electronics' Seat Available..\n");
	if (perf>70.0 && pern>50.0)
	printf("Oxford University: 'Telecommunication' Seat Available..\n");
	if (perf>60.0 && perf<70.0 && pern>50.0)
	printf("MIT: 'IT' Seat Available..\n");
	if (perf>50.0 && perf<60.0 && pern>50.0)
	printf("MIT: 'Chemical' Seat Available..\n");
	if (perf>40.0 && perf<50.0 && pern>50.0)
	printf("MIT: 'Computer' Seat Available..\n");
	if (perf<40.0 || pern<50.0)
	printf("no seat available..");
	
	
	
	
	
	
	
	
	
	
	
	
}

#include<stdio.h>
#include<math.h>

int main(){
	
	int d;
	printf("write week day number..\n");
	scanf("%d",&d);
	
	switch(d){
		case 1:
			printf("1st day of week is Monday..");
			break;
		case 2:
		    printf("2nd day of week is Tuesday..");
			break;
		case 3:
			printf("3rd day of week is Wednesday..");
			break;
		case 4:
			printf("4th day of week is Thursday..");
			break;	
		case 5:
			printf("5th day of week is Friday..");
			break;
		case 6:
			printf("6th day of week is Saturday..");
			break;
		case 7:
			printf("7th day of week is Sunday..");
			break;
		default:
			printf("no such day in a week..");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}

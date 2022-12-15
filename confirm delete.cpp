#include<stdio.h>
#include<math.h>

int main(){
	
	char c;
	printf("Are you sure you want to delete this? Y/N \n");
	scanf("%c",&c);
	switch (c){
		case 'y':
		case 'Y':
		     printf("Deleted Successfully");
		     break;
		case 'n':
		case 'N':
			printf("Delete cancelled");
			break;
		default:
			printf("choose the right option");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}

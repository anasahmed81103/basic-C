#include<stdio.h>

int main(){
	
	
	int id,hr,pay;
	float sal;
	
	printf("Enter employee ID..\n");
	scanf("%d",&id);
	printf("Employee ID= %d\n",id);
	printf("Enter hourly pay..\n",pay);
	scanf("%d",&pay);
	printf("hourly pay= %d\n",pay);
    printf("enter working hours..\n");
    scanf("%d",&hr);
    printf("working hours= %d\n",hr);
    sal=hr*pay*23;
    printf("salary= %.2f",sal);
    
}
	
	
	
	
	
	
	
	
	


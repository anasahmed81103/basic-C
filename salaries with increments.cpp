#include<stdio.h>
#include<string.h>

struct empolyee{
	char name[15];
	int salary;
	int hrs;
}x[10];

void bonus (int i);

int main(){
	for (int i=0;i<10;i++){
		printf("enter name of empolyee %d : ",i+1);
		scanf("%s",&x[i].name);
		printf("enter salary of employee : ");
		scanf("%d",&x[i].salary);
		printf("enter no. of hrs worked : ");
		scanf("%d",&x[i].hrs);
	}
	bonus(0);
	for (int i=0;i<10;i++){
		printf("\nname of empolyee %d : %s",i+1,x[i].name);
		printf("\nsalary of employee : %d",x[i].salary);
		printf("\nno. of hrs worked : %d",x[i].hrs);
	}
}

void bonus (int i){
	int bon;
	bon=x[i].hrs*50;
	x[i].salary=x[i].salary+bon;
	i++;
	if(i<10){
		bonus(i);
	}
	else{
		return;
	}
}

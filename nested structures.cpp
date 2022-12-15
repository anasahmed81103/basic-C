#include<stdio.h>
#include<string.h>

struct employee{
	int employee_id;
	char name[20];
	int salary;
};

struct organisation{
	char organization_name[45];
	char organization_number[50];
	struct employee y;
}x;

int main(){
	printf("size of structure Organization: %d",sizeof(x));
	strcpy(x.organization_name,"NU-Fast");
	strcpy(x.organization_number,"NUFAST123ABC");
	x.y.employee_id=127;
	strcpy(x.y.name,"linus Sebastian");
	x.y.salary=40000;
	
	printf("\nOrganisation name: %s",x.organization_name);
	printf("\nOrganisation number: %s",x.organization_number);
	printf("\nEmployee id: %d",x.y.employee_id);
	printf("\nEmployee name: %s",x.y.name);
	printf("\nSalary: %d",x.y.salary);
	
}

#include <stdio.h>
#include <math.h>
#include<string.h>

int main(){
	int a;
	printf("enter no. of students: ");
	scanf("%d",&a);
	struct students {
		int roll;
		char name[20];
		char dep[20];
		char course[20];
	}x[a];
	
	for (int i=0;i<a;i++){
		printf("enter student %d roll no. : ",i+1);
		scanf("%d",&x[i].roll);
		printf("enter student %d name: ",i+1);
		scanf("%s",&x[i].name);
		printf("enter department: ");
		scanf("%s",&x[i].dep);
		printf("enter course: ");
		scanf("%s",&x[i].course);
	}
	for (int i=0;i<a;i++){
		printf("\nstudent %d roll no. %d: ",i+1,x[i].roll);
		printf("\nstudent %d name: %s",i+1,x[i].name);
		printf("\ndepartment: %s",x[i].dep);
		printf("\ncourse: %s",x[i].course);
	}
}





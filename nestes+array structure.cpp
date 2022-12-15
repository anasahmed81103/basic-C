#include<stdio.h>
#include<string.h>

struct Register {
	char courseID[10];
	char courseName[20];
};

struct student {
	char student_id[20];
	char fistName[20];
	char lastName[20];
	long cellNo;
	char email[25];
	struct Register y;
}x[5];

void fun1 (int i);
void fun2 (int i);

int main(){
	fun1(0);
}

void fun1(int i){
	printf("enter student ID: ");
	scanf("%s",&x[i].student_id);
	printf("enter first name: ");
	scanf("%s",&x[i].fistName);
	printf("enter last name: ");
	scanf("%s",&x[i].lastName);
	printf("enter cell no: ");
	scanf("%d",&x[i].cellNo);
	printf("enter email: ");
	scanf("%s",&x[i].email);
	printf("enter course Id: ");
	scanf("%s",&x[i].y.courseID);
	printf("enter course name: ");
	scanf("%s",&x[i].y.courseName);
	i++;
	if(i<5){
		fun1(i);
	}
	else{
		fun2(0);
	}
}

void fun2 (int i){
	printf("\n student ID: %s",x[i].student_id);
	printf("\n first name: %s",x[i].fistName);
	printf("\n last name: %s",x[i].lastName);
	printf("\n cell no: %d",x[i].cellNo);
	printf("\n email: %s",x[i].email);
	printf("\n course Id: %s",x[i].y.courseID);
	printf("\n course name: %s",x[i].y.courseName);
	i++;
	if (i<5){
		fun2(i);
	}
	else{
		return;
	}
	
}

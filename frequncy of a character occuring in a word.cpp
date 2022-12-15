#include <stdio.h>
#include <string.h>
#include<math.h>

int main(){
	
	int n,i,j,r,f=0;
	char name[100],s;
	printf("enter name:");
	gets(name);
	printf("enter name of the 5 courses taken this fall semester\n");
	
	char course[100],course1[100],course2[100],course3[100],course4[100],course5[100];
	
	for (i=0;i<5;i++){
		printf("enter course %d: ",i+1);
		gets(course);
		if(i==0){
			strcpy(course1,course);
		}
		else if(i==1){
			strcpy(course2,course);
		}
		else if(i==2){
			strcpy(course3,course);
		}
		else if(i==3){
			strcpy(course4,course);
		}
		else if(i==4){
			strcpy(course5,course);
		}
	}
	
	printf("enter the character whose frequency you want to search: ");
	scanf(" %c",&s);
	
	f=0;	
	for (j=0;j<=strlen(name);j++){
		
	    if(name[j]==s)
		   f++;
			
		}
	printf("\nfrequency of character in name : %d",f);	
	
	f=0;	
	for (j=0;j<=strlen(course1);j++){
		
	    if(course1[j]==s)
		   f++;
			
		}
	printf("\nfrequency of character in course1 : %d",f);	
	
	f=0;	
	for (j=0;j<=strlen(course2);j++){
		
	    if(course2[j]==s)
		   f++;
			
		}
	printf("\nfrequency of character in course2 : %d",f);	
	
	f=0;	
	for (j=0;j<=strlen(course3);j++){
		
	    if(course3[j]==s)
		   f++;
			
		}
	printf("\nfrequency of character in course3 : %d",f);	
	
	f=0;	
	for (j=0;j<=strlen(course4);j++){
		
	    if(course4[j]==s)
		   f++;
			
		}
	printf("\nfrequency of character in course4 : %d",f);	
	
	f=0;	
	for (j=0;j<=strlen(course5);j++){
		
	    if(course5[j]==s)
		   f++;
			
		}
	printf("\nfrequency of character in course5 : %d",f);	
	
	
	
}

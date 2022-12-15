#include <stdio.h>
#include <string.h>
#include<math.h>

int main(){
	char name1[50],name2[50],name[100];
	printf("enter first name:");
	gets(name1);
	printf("enter second name ");
	gets(name2);
	strcat(name1,name2);
	strcpy(name,strrev(name1));
	printf("reversed name: %s",name);
}

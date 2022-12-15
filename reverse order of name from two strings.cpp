#include <stdio.h>
#include <string.h>
#include<math.h>

int main(){
	char name1[50],name2[50],name[100];
	printf("enter first name:");
	gets(name1);
	printf("enter second name (press one space before enter): ");
	gets(name2);
    printf("name: %s",strcat(name2,name1));
}

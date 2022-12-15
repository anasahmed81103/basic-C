#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
	
	int n;
	char str1[100],str2[100];
	printf("enter string 1 : ");
	gets(str1);
	printf("enter string 2 : ");
	gets(str2);
	n=strcmp(str1,str2);
	if(n==0){
		printf("\nequal strings");
	}
	else if(n<0){
		printf("\nstring 2 is greater");
	}
	else if(n>0){
		printf("\nstring 1 is greater");
    }
}

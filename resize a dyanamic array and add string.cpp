#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main (){
	char n[25],roll[10],*fn;
		printf("enter your name: ");
	    gets(n);
	    fn=(char*)malloc((strlen(n)+1)*sizeof(char));
		printf("enter you roll no: ");
	    gets(roll);
		fn=(char*)realloc(fn,strlen(roll)*sizeof(char));
		strcpy(fn,roll);
		strcat(fn,n);
		printf("\nname(dynamic array): %s",fn); 	
	
	
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main (){
	char n[25],*fn;
		printf("enter your name: ");
	    gets(n);
	    fn=(char*)malloc((strlen(n)+1)*sizeof(char));
		strcpy(fn,n);
		printf("\nname(dynamic array): %s",fn); 	
	    free(fn);
	
}

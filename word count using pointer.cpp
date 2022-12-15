#include<stdio.h>
#include<string.h>

void wordcount(char *txt, int *cnt);

int main(){
	char str[100];
	int count=0;
	printf("enter a string: ");
	fflush(stdin);
	gets(str);
	wordcount(str,&count);
	printf("\nthe word count is %d",count);
}

void wordcount(char *txt, int *cnt){
	int i=0;
	printf("\n%s",txt);
	while(i<100){
		if (*(txt+i)==' ' || *(txt+i)=='/0'){
			(*cnt)++;
		}
		i++;
	}
}

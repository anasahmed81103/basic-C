#include<stdio.h>
#include<math.h>

int main(){
	
	char c;
	printf("Type something (a single character)...\n");
	scanf("%c",&c);
	
	if (c>='A' && c<='Z'){
		printf("Character is A Capital Alphabet..");
	}
	else if (c>='a' && c<='z'){
		printf("Character is a small alphabet..");
	}
	else if (c>='0' && c<='9'){
		printf("Character is a digit..");
	}
	else {
		printf("Character is a special...");
	}
	
	
	
	
	
	
	
	
	
	
	
}

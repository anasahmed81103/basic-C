#include<stdio.h>

int main(){
	
	int n=1,count;
	char a,b,c;
	while (1){
	printf("Enter alphabets of your choice (in triplets\n");
	scanf(" %c %c %c",&a,&b,&c);
	
	if(a<b && b<c){
		printf("Sequence found. Forward Sequence\n");
		break;
	}
	else if(c<b && b<a){
		printf("Sequence found. Backward Sequence\n");
		break;
	}
	n++;
	count=n*3;
	
}
	printf("number of alphabets recorded before sequence found: ")
	
	
	
	
	

	
}

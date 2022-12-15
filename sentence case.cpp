#include<stdio.h>
#include<string.h>

void sentenceCase (char *t, int s );

int main(){
	char arr[]="hello.this a message.dont ignore it.";
	int s1=sizeof(arr);
	int s2=sizeof*(arr);
	int size=s1/s2;
	sentenceCase(arr,size);
	printf("%s",arr);
}

void sentenceCase (char *t, int s ){
	int a=*t;
	a=(a+65)-97;
    *t=a;
	for (int i=0;i<s;i++){
		if (*(t+i)=='.'){
			int k=i+1;
			int a=*(t+k);
			a=(a+65)-97;
			*(t+k)=a;
		}
	}
}

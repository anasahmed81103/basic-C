#include<stdio.h>
#include<string.h>

int main(){
	int max,secmax,i;
	int a[]={1,3,6,3,23,56,2,7,65,3,2,10,75,33,99,1,34,50,19,20};
	int *p;
	p=a;
	max=*p;
	secmax=*p;
	for (i=0;i<20;i++){
		if (*(p+i)>max){
			max=*(p+i);
		}
	}
	for (i=0;i<20;i++){
		if (*(p+i)<max && *(p+i)>secmax ){
			secmax=*(p+i);
		}
	}
	printf("max=%d\nsecond max= %d",max,secmax);
}

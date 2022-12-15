#include<stdio.h>
#include<string.h>

int main(){
	int a[]={1,2,3};
	int sum;
	int *p;
	p=a;
	sum=*p+*(p+1)+*(p+2);
	printf("%d",sum);
	
}

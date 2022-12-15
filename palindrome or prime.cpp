#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int n,n1,n2,n3,n4,n5,d=2,i=0;
	printf("give me a 5 digit number\n");
	scanf("%d",&n);
	if (n<10000 || n>99999){
		printf("Invalid no.\n");
	}
	else {
		n1=n%10;
		n=n/10;
		n2=n%10;
		n=n/10;
		n3=n%10;
		n=n/10;
		n4=n%10;
		n=n/10;
		n5=n%10;
		
		if((n1+n2+n3+n4+n5)%2==0){
			printf("sum is even\n");
			while (d<n){
				if(n%d==0){
					printf("no. is not prime\n");
					i++;
					break;
				}
				d++;
			}
			if (i==0){
			printf("no. is prime\n");
		}
		}
			
		else if ((n1+n2+n3+n4+n5)%2!=0){
			printf("sum is odd\n");
			if(n1==n5 && n2==n4){
				printf("no. is Palindrome\n");
			}
			else 
			printf("no. is not palindrome\n");
		}
		
			
		
	}
}


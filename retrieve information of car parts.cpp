#include <stdio.h>
#include <math.h>
#include<string.h>

void fun2(char c[],int i,struct sn z[]);
void search (struct sn z[]);

struct parts {
		int yr;
		int qt;
		char mt[20];
	};
	struct sn {
		char a[3];
		struct parts y;
	}z[20];

void search (struct sn z[]){
	char c[2];
	int i=0;
	printf("which engine do u want to find(enter its code)?");
	scanf(" %s",&c);
	fun2(c,i,z);
}

void fun2(char c[],int i,struct sn z[]){
	if (strcmp(z[i].a,c)!=0){
		i++;
		fun2(c,i,z);
	}
	else {
		printf("engine found!\ndetails\n");
		printf("code :%s\nyear of manufacture:%d\nquantity:%d\nmaterial:%s",z[i].a,z[i].y.yr,z[i].y.qt,z[i].y.mt);
	}
}

int main(){
	for (int i=0;i<12;i++){
		printf("enter code (like AA1, BB3): ");
		scanf(" %s",&z[i].a);
		printf("enter year of manufacture: ");
		scanf("%d",&z[i].y.yr);
		printf("enter quantity: ");
		scanf("%d",&z[i].y.qt);
		printf("enter material: ");
		scanf("%s",&z[i].y.mt);
	}
	search(z);
}



#include<stdio.h>
#include<string.h>

#define a 10

struct books{
	int accession_num;
	char author[20];
	char title[20];
	char flag[3];
}x[100];

void populate ();
void display (int j);
void all_aut (void);
void add (void);
void all2 (char str[],int i);
void tit_no (void);
void no (char str[],int i,int j);
void tot (void);
void issue (void);
void search (char str1[],char str2[],int i);


int main(){
	populate();
	int i;
	printf("                           MENU                            ");
	printf("\n===========================================================\n\n");
	printf("1 - Display book information\n2 - Add a new book\n3 - Display all the books in the library of a particular author\n4 - Display the number of books of a particular title\n5 - Display the total number of books in the library\n6 - Issue a book");
	printf("\nselect option: ");
	scanf("%d",&i);
	
	switch (i){
		case 1:
			display(0);
			break;
		case 2:
			add();
			break;
		case 3:
			all_aut();
			break;
		case 4:
			tit_no();
			break;
		case 5:
			tot();
			break;
		case 6:
			issue();
			break;
		default:
			printf("\nwrong option!");
	}
}

void populate (void){
	int i;
	for (i=0;i<a;i++){
		x[i].accession_num=i;
		printf("enter book title %d: ",i);
		scanf("%s",&x[i].title);
		printf("enter book author: ");
		scanf("%s",&x[i].author);
		printf("is it available: ");
		scanf("%s",&x[i].flag);
	}
	return;
}

void display (int j){
	int i;
	if (j!=1){
	printf("enter accession no. of book: ");
	scanf("%d",&i);
}
	printf("no: %d\nauthor: %s\ntitle: %s\navailable: %s",x[i].accession_num,x[i].author,x[i].title,x[i].flag);
	if (j==1){
		return;
	}
}

void add (void){
	int i=a;
	i++;
	x[i].accession_num=i;
	printf("enter name of author: ");
	scanf("%s",&x[i].author);
	printf("enter book title: ");
	scanf("%s",&x[i].title);
	strcpy(x[i].flag,"yes");	
}

void all_aut (void){
	char s[20];
	printf("enter author: ");
	scanf("%s",&s);
	all2(s,0);
} 
void all2 (char str[],int i){
	if (strcmp(x[i].author,str)==0){
		display(1);
	}
	i++;
	if (i<a){
		all2(str,i);
	}
}

void tit_no (void){
	char s[20];
	printf("enter title: ");
	scanf("%d",&s);
	no(s,0,0);
}
void no (char str[],int i,int j){
	if (strcmp(str,x[i].title)==0){
		j++;
	}
	i++;
	if(i<a-1){
		no(str,i,j);
	}
	if (i==a-1){
		printf("no of of books of title: %d",j);
	}
}

void tot (void) {
	printf("total no. of books: %d",a);
}

void issue (void){
	char s1[20],s2[20];
	printf("enter book title: ");
	scanf("%s",&s1);
	printf("enter book author: ");
	scanf("%s",&s2);
	search(s1,s2,0);
}
void search (char str1[],char str2[],int i){
	int j=a;
	if(strcmp(x[i].title,str1)==0 && strcmp(x[i].author,str2)==0){
		printf("book %d issued",i);
		strcpy(x[i].flag,"no");
		j--;
		printf("no. of books available now %d",j);
	}
	else{
		i++;
		search(str1,str2,i);
	}
}


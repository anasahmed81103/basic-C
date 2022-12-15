#include<stdio.h>

int main(){
	
	int i,marks=0;
	char ans;
	printf("                  OXFORD UNIVERSITY\N");
	printf("......................entry test..............................\n\n");
	printf("marks: 40\n");
	printf("Q1) How many roots does x^2+6x-9=0 have?\n");
	printf("a)2       b)3       c)1        d)none \n");
	printf("Q2) What is the cube root of 64:\n");
	printf("a)2       b)3       c)4        d)5 \n");
	printf("Q3) Who was Sultan AbdulHamid II?\n");
	printf("a)Caliph   b)Hazrat lere   c)Political genius   d)all of the above   \n");
	printf("Q4) What is the factorial of 5?\n");
	printf("a)5       b)1       c)120        d)25 \n");
	printf("Q5) What is the tastiest food?\n");
	printf("a)biryani   b)burger   c)pizza    d)daal \n");
	printf("Q6) lim x-->0  x^2-1/x =?\n");
	printf("a)-1      b)1       c)0       d)undefined \n");
	printf("Q7) Who is Amir Sa'adettin Kopek?\n");
	printf("a)Seljuk Ameer   b)Sultan   c)Shehzade    d)Ertugrul's Fan \n");
	printf("Q8) What is EDTA?\n");
	printf("a)Dyanamite    b)Ligand    c)Food preesarvative   d)venom \n");
	printf("Q9) Select two four twenty four?\n");
	printf("a)2424    b)4424     c)24204      d)IDK \n");
	printf("Q10) Which is the best series?\n");
	printf("a)Squid game    b)Game of thrones    c)Payitaht AbdulHamid    d)La casa de papel \n");
	printf("***********************************************\n ener answers\n");
	for (i=1;i<=10;i++){
		scanf(" %c",&ans);
		if(i==1){
		    if (ans=='a')
			marks=marks+4;
			else marks=marks-1;
		}
		if(i==2){
		    if (ans=='c')
			marks=marks+4;
			else marks=marks-1;
		}
		if(i==3){
		    if (ans=='d')
			marks=marks+4;
			else marks=marks-1;
		}	
		if(i==4){
		    if (ans=='c')
			marks=marks+4;
			else marks=marks-1;
			if (marks<=-4){
			printf("Sorry. You did not qualify for admission\n");
			break;
		}
	}
		if(i==5){
		    if (ans=='a')
			marks=marks+4;
			else marks=marks-1;
		}
		if(i==6){
		    if (ans=='d')
			marks=marks+4;
			else marks=marks-1;
		}
		if(i==7){
		    if (ans=='a')
			marks=marks+4;
			else marks=marks-1;
		}
		if(i==8){
		    if (ans=='b')
			marks=marks+4;
			else marks=marks-1;
		}
		if(i==9){
		    if (ans=='b')
			marks=marks+4;
			else marks=marks-1;
		}
		if(i==10){
		    if (ans=='c')
			marks=marks+4;
			else marks=marks-1;
		}
	}

	printf("Marks = %d\n",marks);
	if (marks>=20)
	printf("Congratulation! You Qualified for admission\n");
	else
	printf("Sorry.You are not qualified for admission\n");
	
	
	
	
	
	
	
	
	
	
	
}

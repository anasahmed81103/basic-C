#include<stdio.h>

int main(){
	
	printf("                       USER REGISTRATION                         \n");
	printf("-----------------------------------------------------------------\n\n");
	char n,yn,p,p1,p2,p3,p4,p5,p6,n1,n2,n3,n4,n5,n6;
	int i,num=0,cap=0,small=0;
	while (1){
		
		printf("Enter a user name (within 5 alphabets)\n");
		for (i=1;i<=5;i++){
		scanf(" %c",&n);
		
		if (i==1)
		n1=n;
		else if (i==2)
		n2=n;
		else if (i==3)
		n3=n;
		else if (i==4)
		n4=n;
		else if (i==5)
		n5=n;
		
}
        printf("Username = %c%c%c%c%c%c \n",n1,n2,n3,n4,n5,n6);
        
		printf("confirm? (y/n)\n");
		scanf(" %c",&yn);
		if (yn=='y'){
			break;
		}

}
	
		printf("enter a password containing 6 character (enter at least 1 no,1 capital letter and 1 small letter)\n");
		
	while (1){
		
	for (i=1;i<=6;i++){
		scanf(" %c",&p);
		
		if (i==1)
		p1=p;
		else if (i==2)
		p2=p;
		else if (i==3)
		p3=p;
		else if (i==4)
		p4=p;
		else if (i==5)
		p5=p;
		else if (i==6)
		p6=p;
		
		if (p>='0' && p<='9'){
			num++;
		}
		if (p>='a' && p<='z'){
			small++;
		}
		if (p>='A' && p<='Z'){
			cap++;
		}
	}
	if (num<1 || small<1 || cap<1){
		printf("\nPassword standard not met. Re-enter password :\n");
	}
	else {
		printf("password upto par\n");
		break;
	}
}
	printf("Account created succesfully\n");
	printf("Now try logging in\n\n");
	printf("                            User Login                                  \n");
	printf("************************************************************************\n");
	
	char t,t1,t2,t3,t4,t5,pt,pt1,pt2,pt3,pt4,pt5,pt6;
	printf("Enter user name\n");
	for (i=1;i<=5;i++){
		scanf(" %c",&t);
		
		if (i==1)
		t1=t;
		else if (i==2)
		t2=t;
		else if (i==3)
		t3=t;
		else if (i==4)
		t4=t;
		else if (i==5)
		t5=t;
}
	printf("Enter password\n");
	for (i=1;i<=6;i++){
		scanf(" %c",&pt);
		
		if (i==1)
		pt1=pt;
		else if (i==2)
		pt2=pt;
		else if (i==3)
		pt3=pt;
		else if (i==4)
		pt4=pt;
		else if (i==5)
		pt5=pt;
		else if (i==6)
		pt6=pt;
	
}
	if (n1==t1 && n2==t2 && n3==t3 && n4==t4 && n5==t5){
		if (pt1==p1 && pt2==p2 && pt3==p3 && pt4==p4 && pt5==p5 && pt6==p6){
			printf("\nLogged in Succesfully\nWelcome %c%c%c%c%c",t1,t2,t3,t4,t5);
		}
		else 
		    printf("\nLogin unsuccesful. Input correct username & password\n");
	}
	else 
		printf("\nLogin unsuccesful. Input correct username & password\n");
	
	
	
	
	
	
	
	
	}
	
	
	
	
	
	
	
	
	
	
	
	
	


#include<stdio.h>

int main(){
	
	float wps=15,wmix=20,waddc=2,waddm=4,timew=76;
	float bps=20,bmix=25,baddc=15,timeb=105;
	char c,yn,ynb,m;
	printf("Coffee machine\n");
	printf("What type of coffee do u want? (W or b)\n");
	scanf("%c",&c);
	
	switch (c){
		
		case 'w':
		case 'W':
			printf("Is  the cup size double? (y/n)\n");
			scanf(" %c",&yn);
		switch (yn){
			case 'y':
			case 'Y':
				wps=wps*1.5;wmix=wmix*1.5;waddc=waddc*1.5;waddm=waddm*1.5,timew=timew*1.5;
				printf("Is the coffee manual or automatic? (m/a)\n");
				scanf(" %c",&m);
			switch (m){
				case 'm':
				case 'M':
				 	printf("put water: %.2f mins\n",wps);
				 	printf("Sugar : %.2f mins\n",wps);
				 	printf("Mix well : %.2f mins\n",wmix);
				 	printf("Add coffee : %.2f mins\n",waddc);
				 	printf("Add milk : %.2f mins\n",waddm);
				 	printf("Mix well : %.2f mins\n",wmix);
				 	break;
				case 'a':
				case 'A':
				 	printf("Your coffee would be made automatically \nTotal Time : %.2f\n",timew);
				 	break;
				default:
				 	printf("Invalid command");
			break;
			
			case 'n':
			case 'N':
				printf("Is the coffee manual or automatic? (m/a)\n");
				scanf(" %c",&m);
			switch (m){
				case 'm':
				case 'M':
				 	printf("put water: %.2f mins\n",wps);
				 	printf("Sugar : %.2f mins\n",wps);
				 	printf("Mix well : %.2f mins\n",wmix);
				 	printf("Add coffee : %.2f mins\n",waddc);
				 	printf("Add milk : %.2f mins\n",waddm);
				 	printf("Mix well : %.2f mins\n",wmix);
				 	break;
				case 'a':
				case 'A':
				 	printf("Your coffee would be made automatically \nTotal Time : %.2f\n",timew);
				 	break;
			break;	 	
				default:
				 	printf("Invalid command");
		break;		 	
			}	
		case 'b':
		case 'B':
			printf("Is  the cup size double? (y/n)\n");
			scanf(" %c",&ynb);
		switch (ynb){
			case 'y':
			case 'Y':
				wps=wps*1.5;bmix=bmix*1.5;baddc=baddc*1.5,timeb=timeb*1.5;
				printf("Is the coffee manual? (y/n)\n");
				scanf(" %c",&m);
			switch (m){
				case 'm':
				case 'M':
				 	printf("put water: %.2f mins\n",bps);
				 	printf("Sugar : %.2f mins\n",bps);
				 	printf("Mix well : %.2f mins\n",bmix);
				 	printf("Add coffee : %.2f mins\n",baddc);
				 	printf("Mix well : %.2f mins\n",bmix);
				 	break;
				case 'a':
				case 'A':
				 	printf("Your coffee would be made automatically \nTotal Time : %.2f\n",timeb);
				 	break;
				default:
				 	printf("Invalid command");
			break;
			
			case 'n':
			case 'N':
				printf("Is the coffee manual or automatic? (m/a)\n");
				scanf(" %c",&m);
			switch (m){
				case 'm':
				case 'M':
				 	printf("put water: %.2f mins\n",bps);
				 	printf("Sugar : %.2f mins\n",bps);
				 	printf("Mix well : %.2f mins\n",bmix);
				 	printf("Add coffee : %.2f mins\n",baddc);
				 	printf("Mix well : %.2f mins\n",bmix);
				 	break;
				case 'a':
				case 'A':
				 	printf("Your coffee would be made automatically \nTotal Time : %.2f\n",timeb);
				 	break;
				default:
				 	printf("Invalid command");
			break;	 	
		}	
		break;
		
		
				
		}
		default:
			printf("invalid command..");
		
		
		
		
		
		
	}
	
	}
	
	}
}
}
	
	
	
	
	
	
	
	
	
	


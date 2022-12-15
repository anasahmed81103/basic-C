#include<stdio.h>

int main(){
	
	int t,q1,q2,q3,q4,t1,t2,t3,t4,tot;
	char c1,c2,c3,c4;
	printf("                   ABC Restaurant online order placement\n");
	printf("                                  WELCOME!\n");
	printf("                   -------------------------------------\n");
	printf("Please select from the following menu : \n B=Burger (200 pkr) \n F=French Fries (50 pkr) \n P=Pizza (500 pkr)\n S=sandwiches (150 pkr)\n \n");
	printf("How many types of snacks u need to order? : ");
	scanf("%d",&t);
	
	switch (t){
		case 1:
			printf("Enter the snack you want to order : ");
			scanf(" %c",&c1);
			printf("Enter Quantity :");
			scanf("%d",&q1);
			printf("-----------------\n");
			printf("You have ordered!\n");
			if (c1=='b' || c1=='B'){
			tot=q1*200;
			printf("%d burger(s) = %d pkr\n",q1,tot);}
			else if (c1=='f' || c1=='F'){
			tot=q1*50;
			printf("%d French Fries = %d pkr\n",q1,tot);}
			else if (c1=='p' || c1=='F'){
			tot=q1*500;
			printf("%d Pizza(s) = %d pkr\n",q1,tot);}
			else if (c1=='s' || c1=='S'){
			tot=q1*150;
			printf("%d Sandwich(es) = %d pkr\n",q1,tot);}
			printf("Total : %d pkr \n",tot);
			break;
		case 2:
			printf("Enter the first snack you want to order : ");
			scanf(" %c",&c1);
			printf("Enter Quantity : ");
			scanf("%d",&q1);
			printf("Enter the second snack you want to order : ");
			scanf(" %c",&c2);
			printf("Enter Quantity : ");
			scanf("%d",&q2);
			
			printf("-----------------\n");
			printf("You have ordered!\n");
			if (c1=='b' || c1=='B'){
			t1=q1*200;
			printf("%d burger(s) = %d pkr\n",q1,t1);}
			else if (c1=='f' || c1=='F'){
			t1=q1*50;
			printf("%d French Fries = %d pkr\n",q1,t1);}
			else if (c1=='p' || c1=='F'){
			t1=q1*500;
			printf("%d Pizza(s) = %d pkr\n",q1,t1);}
			else if (c1=='s' || c1=='S'){
			t1=q1*150;
			printf("%d Sandwich(es) = %d pkr\n",q1,t1);}
			
			if (c2=='b' || c2=='B'){
			t2=q2*200;
			printf("%d burger(s) = %d pkr\n",q2,t2);}
			else if (c2=='f' || c2=='F'){
			t2=q2*50;
			printf("%d French Fries = %d pkr\n",q2,t2);}
			else if (c2=='p' || c2=='F'){
			t2=q2*500;
			printf("%d Pizza(s) = %d pkr\n",q2,t2);}
			else if (c2=='s' || c2=='S'){
			t2=q2*150;
			printf("%d Sandwich(es) = %d pkr\n",q2,t2);}
			tot=t1+t2;
			printf("Total : %d pkr\n",tot);
			break;
		case 3:
			printf("Enter the first snack you want to order : ");
			scanf(" %c",&c1);
			printf("Enter Quantity : ");
			scanf("%d",&q1);
			printf("Enter the second snack you want to order : ");
			scanf(" %c",&c2);
			printf("Enter Quantity : ");
			scanf("%d",&q2);
			printf("Enter the third snack you want to order : ");
			scanf(" %c",&c3);
			printf("Enter Quantity : ");
			scanf("%d",&q3);
			printf("-----------------\n");
			printf("You have ordered!\n");
			
			if (c1=='b' || c1=='B'){
			t1=q1*200;
			printf("%d burger(s) = %d pkr\n",q1,t1);}
			else if (c1=='f' || c1=='F'){
			t1=q1*50;
			printf("%d French Fries = %d pkr\n",q1,t1);}
			else if (c1=='p' || c1=='F'){
			t1=q1*500;
			printf("%d Pizza(s) = %d pkr\n",q1,t1);}
			else if (c1=='s' || c1=='S'){
			t1=q1*150;
			printf("%d Sandwich(es) = %d pkr\n",q1,t1);}
			
			if (c2=='b' || c2=='B'){
			t2=q2*200;
			printf("%d burger(s) = %d pkr\n",q2,t2);}
			else if (c2=='f' || c2=='F'){
			t2=q2*50;
			printf("%d French Fries = %d pkr\n",q2,t2);}
			else if (c2=='p' || c2=='F'){
			t2=q2*500;
			printf("%d Pizza(s) = %d pkr\n",q2,t2);}
			else if (c2=='s' || c2=='S'){
			t2=q2*150;
			printf("%d Sandwich(es) = %d pkr\n",q2,t2);}
			
			if (c3=='b' || c3=='B'){
			t3=q3*200;
			printf("%d burger(s) = %d pkr\n",q3,t3);}
			else if (c3=='f' || c3=='F'){
			t3=q3*50;
			printf("%d French Fries = %d pkr\n",q3,t3);}
			else if (c3=='p' || c3=='F'){
			t3=q3*500;
			printf("%d Pizza(s) = %d pkr\n",q3,t3);}
			else if (c3=='s' || c3=='S'){
			t3=q3*150;
			printf("%d Sandwich(es) = %d pkr \n",q3,t3);}
			tot=t1+t2+t3;
			printf("Total : %d pkr\n",tot);
	
			break;
		case 4:	
		    printf("Enter the first snack you want to order : ");
			scanf(" %c",&c1);
			printf("Enter Quantity : ");
			scanf("%d",&q1);
			printf("Enter the second snack you want to order : ");
			scanf(" %c",&c2);
			printf("Enter Quantity : ");
			scanf("%d",&q2);
			printf("Enter the third snack you want to order : ");
			scanf(" %c",&c3);
			printf("Enter Quantity : ");
			scanf("%d",&q3);
			printf("Enter the fourth snack you want to order : ");
			scanf(" %c",&c4);
			printf("Enter Quantity : ");
			scanf("%d",&q4);
			printf("-----------------\n");
			printf("You have ordered!\n");
			
			if (c1=='b' || c1=='B'){
			t1=q1*200;
			printf("%d burger(s) = %d pkr\n",q1,t1);}
			else if (c1=='f' || c1=='F'){
			t1=q1*50;
			printf("%d French Fries = %d pkr\n",q1,t1);}
			else if (c1=='p' || c1=='F'){
			t1=q1*500;
			printf("%d Pizza(s) = %d pkr\n",q1,t1);}
			else if (c1=='s' || c1=='S'){
			t1=q1*150;
			printf("%d Sandwich(es) = %d pkr\n",q1,t1);}
			
			if (c2=='b' || c2=='B'){
			t2=q2*200;
			printf("%d burger(s) = %d pkr\n",q2,t2);}
			else if (c2=='f' || c2=='F'){
			t2=q2*50;
			printf("%d French Fries = %d pkr\n",q2,t2);}
			else if (c2=='p' || c2=='F'){
			t2=q2*500;
			printf("%d Pizza(s) = %d pkr\n",q2,t2);}
			else if (c2=='s' || c2=='S'){
			t2=q2*150;
			printf("%d Sandwich(es) = %d pkr\n",q2,t2);}
			
			if (c3=='b' || c3=='B'){
			t3=q3*200;
			printf("%d burger(s) = %d pkr\n",q3,t3);}
			else if (c3=='f' || c3=='F'){
			t3=q3*50;
			printf("%d French Fries = %d pkr\n",q3,t3);}
			else if (c3=='p' || c3=='F'){
			t3=q3*500;
			printf("%d Pizza(s) = %d pkr\n",q3,t3);}
			else if (c3=='s' || c3=='S'){
			t3=q3*150;
			printf("%d Sandwich(es) = %d pkr \n",q3,t3);}
			
			if (c4=='b' || c4=='B'){
			t4=q4*200;
			printf("%d burger(s) = %d pkr\n",q4,t4);}
			else if (c4=='f' || c4=='F'){
			t4=q4*50;
			printf("%d French Fries = %d pkr\n",q4,t4);}
			else if (c4=='p' || c4=='F'){
			t4=q4*500;
			printf("%d Pizza(s) = %d pkr\n",q4,t4);}
			else if (c4=='s' || c4=='S'){
			t4=q4*150;
			printf("%d Sandwich(es) = %d pkr \n",q4,t4);}
			tot=t1+t2+t3+t4;
			printf("Total : %d pkr\n",tot);
	
			break;
			
		default:
				printf("invalid action\n");
				break;
	}
	if (t>0 && t<5)
	printf("Thankyou for your order... have a nice day");
	
	
	
	
	
	
	
	
	
	
	
}

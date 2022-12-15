#include<stdio.h>
#include<math.h>

int main(){

int hr,min;
char c;

printf("Give a time (for ex: 18:25)\n");
scanf("%d %c %d",&hr,&c,&min);
printf("%d:%d\n",hr,min);

if (hr>=5 && hr<=11) {
	printf("Good morning!");
}
else if (hr>=12 && hr<=18){
	printf("Good Evening!");
}
else if (hr>=19 && hr<=23){
	printf("Good night!");
}
else if (hr>=1 && hr<=4) {
	printf("so ja harami!");
}
else {
	printf("incorect time...");
}






}



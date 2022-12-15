#include<iostream>

int main(){

     int a,m,f;
     printf("we are going to see who is youngest...\n");
     printf("we have three boys. Ali, Moazzam and Fahad...\n");
     printf("Ali is..?\n");
     scanf("%d",&a);
     printf("Moazzam is..?\n");
     scanf("%d",&m);
     printf("Fahad is..?\n");
     scanf("%d",&f);

if (a<m && a<f){
	printf("Ali is youngest..");
} 
else if (m<a && m<f) {
	printf("Moazzam is youngest..");
}
else if (f<a && f<m) {
	printf("Fahad is youngest..");
}
else {
	printf("all are of same age..");
}







}


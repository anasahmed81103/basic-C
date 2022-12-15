#include<stdio.h>
#include<string.h>

struct dimensions {
	int lenght;
	int width;
	int height;
	int volume;
}x[5];

int main (){
	char c;
	for (int i=0;i<5;i++){
	    scanf("%d",&x[i].lenght);
		scanf("%d",&x[i].width);
		scanf("%d",&x[i].height);
}
    for (int i=0;i<5;i++){
	    x[i].volume=x[i].height*x[i].lenght*x[i].width;
	    if( x[i].height<=41){
	    	printf("\n%d",x[i].volume);
		}
}
}

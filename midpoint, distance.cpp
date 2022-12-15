#include<stdio.h>
#include<math.h>

int main(){
	
	float x1,x2,y1,y2;
	float d1,d2,dist,mp1,mp2;
	
	printf("we are going to calcalate distance and mid points...\n");
	printf("input (x1,y1), (x2,y2)\n");
	printf("hint: input each number than press space\n");
	scanf("%f %f",&x1,&y1);
	scanf("%f %f",&x2,&y2);
	printf("(x1,y1)=(%.1f,%.1f)\n",x1,y1);
	printf("(x2,y2)=(%.1f,%.1f)\n",x2,y2);
	mp1=(x1+x2)/2;
	mp2=(y1+y2)/2;
    printf("mid-point =( %.2f , %.2f )\n",mp1,mp2);
	d1=(x2-x1)*(x2-x1);
	d2=(y2-y1)*(y2-y1);
	dist= sqrt(d1+d2);
	printf("distance = %.2f sq.unit",dist);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}

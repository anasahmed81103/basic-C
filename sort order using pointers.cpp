#include<stdio.h>
#include<string.h>

void sortFunc (int *a, int s, int o);

int main(){
	int a[]={1,3,7,3,9,1,0,7};
	int s1=sizeof(a);
	int s2=sizeof(*a);
	int s=s1/s2;
	int o;
	printf("enter order to be sort (1=Asc,2=Desc)\n");
	scanf("%d",&o);
	sortFunc(a,s,o);

//for(int i=0;i<s;i++){
//	printf("%d ",*(a+i));
//}
	
}

void sortFunc (int *a, int s, int o){
	switch(o){
	case 1:
	for(int i=0;i<s;i++){
		for (int j=i+1;j<s;j++){
			if (*(a+i)>*(a+j)){
				int tmp;
				tmp=*(a+i);
				*(a+i)=*(a+j);
				*(a+j)=tmp;
			}
		}
	}
	    break;
	case 2:
	 for(int i=0;i<s;i++){
		for (int j=i+1;j<s;j++){
			if (*(a+i)<*(a+j)){
				int tmp;
				tmp=*(a+i);
				*(a+i)=*(a+j);
				*(a+j)=tmp;
			}
		}
	}   
	break;
}
    for(int i=0;i<s;i++){
        printf("%d,",*(a+i));
  }
}

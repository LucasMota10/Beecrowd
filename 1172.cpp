#include <stdio.h>

int main(){
	
	int x[10],y,i;
	
	for(i=0;i<10;i++){
		scanf("%d",&y);
		if(y <=0){
			printf("x[%d] = 1\n",i);
		}else{
			printf("x[%d] = %d\n",i,y);
		}
	}
}

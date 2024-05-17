#include <stdio.h>

int main(){
	int num,i,x,y;
	float z;
	
	scanf("%d",&num);
	
	for(i=0;i<num;i++){
		scanf("%d %d",&x,&y);
		if(y == 0){
			printf("divisao impossivel\n");
		}else{
			z = (x*1.0)/(y*1.0);
			printf("%.1f\n",z);
		}
	}
}

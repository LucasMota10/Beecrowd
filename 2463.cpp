#include <stdio.h>

int main(){
	int num,i,x,sum;
	
	scanf("%d",&num);
	
	for(i=0;i<num;i++){
		scanf("%d",&x[i]);
		sum = sum + x[i];
	}
	printf("igual = %d",sum);
}

#include <stdio.h>

int main(){
	
	int num,i,x,y,sum;
	
	sum = 0;
	
	scanf("%d",&num);
	
	for(i=0;i<num;i++){
		scanf("%d %d",&x,&y);
		if(x>y){
			sum = sum + y;
		}
	}
	printf("%d\n",sum);
}

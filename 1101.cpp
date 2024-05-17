#include <stdio.h>

int main(){
	int x,y,i,count;
	
	scanf("%d %d",&x,&y);
	count = 0;
	
	while((x > 0 && y > 0)){
	
	if(x > y){
		for(i=y;i<=x;i++){
			count = count + i;
			printf("%d ",i);
		}
	}
	if(x < y){
		for(i=x;i<=y;i++){
			count = count + i;
			printf("%d ",i);
		}
	}
	printf("Sum =%d\n",count);
	count = 0;
	scanf("%d %d", &x,&y);
	}
}

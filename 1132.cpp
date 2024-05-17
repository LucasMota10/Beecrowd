#include <stdio.h>

int main(){
	int x,y,sum = 0;
	
	scanf("%d",&x);
	scanf("%d",&y);
	
	if(x > y){
		for(;y<=x;y++){
			if(y%13==1){
				sum = y + sum;
			}	
		}
		printf("%d",sum);
	}
	if(x < y){
		for(;x<=y;x++){
			if(x%13!=0){
				sum = x + sum;		
			}
		}
		printf("%d",sum);
	}
	
}


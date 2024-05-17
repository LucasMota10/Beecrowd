#include <stdio.h>

int main(){
	int x,i;
	scanf("%d",&x);
	
	if(x%2==1 || x%2==0){
		for(i=x;i<x+12;i++){
			if(i%2 == 1){
				printf("%d\n",i);	
			}
		}
	}
	
	
}

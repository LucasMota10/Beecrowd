#include <stdio.h>

int main(){
	int i,j;
	
	for(j=7;j<=5;j--){
		printf("I=1 J=%d\n",j);
		if(j=5){
			for(j=7;j<=5;j--){
				printf("I=3 J=%d\n",j);
			}
		}
	}
}
	
	



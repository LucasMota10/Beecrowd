#include <stdio.h>

int main(){
	float x;
	int i,y;
	y = 0;
	
	for(i = 1; i<=6 ;i++){
		scanf("%f", &x);
		if(x > 0){
			y++;
	
		}
    }
    printf("%d valores positivos\n", y);
		
}

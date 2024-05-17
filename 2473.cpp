#include <stdio.h>

int main(){
	int i,x[6],sort,j,count;
	
	count = 0;
	
	for(i=0;i<6;i++){
		scanf("%d",&x[i]);	
	}
	for(i=0;i<6;i++){
		scanf("%d",&sort);
		for(j=0;j<6;j++){
			if(sort==x[j]){
				count++;
			}
		}
	}
	if(count < 3){
		printf("azar\n");
	}else{
		if(count == 3){
			printf("terno\n");
		}else{
			if(count == 4){
				printf("quadra\n");
			}else{
				if(count == 5){
					printf("quina\n");
				}else{
					if(count == 6){
						printf("sena\n");
					}
				}
			}
		}
	}
}

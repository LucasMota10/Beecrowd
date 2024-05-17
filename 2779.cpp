#include <stdio.h>

int main(){
	int esp,comp,count = 0;
	scanf("%d",&esp);
	scanf("%d",&comp);
	int x = esp;
	int fig[comp];
	
	for(int i = 0; i<comp;i++){
			scanf("%d",&fig[i]);
	}
	for(int j = 0; j<comp;j++){
		count = 0;
		for(int z = 0; z < comp;z++){
		if(fig[j] == fig[z]){
			count++;
		}	
		}
		}
		printf("%d",x);
	}


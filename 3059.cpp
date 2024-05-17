#include <stdio.h>

int main(){
	
	int tam,min,max;
	int count = 0;
	
	scanf("%d %d %d",&tam,&min,&max);
	
	int vet[tam];
	
	for(int i = 0; i < tam; i++){
		scanf("%d",&vet[i]);
	}
	
	for(int z = 0; z < tam; z++){
		for(int j = 0; j < tam; j++){
			if(z != j){
				int x = 0;
				x = vet[z] + vet[j];
				if(x >= min && x <= max){
					count++;
				}
			}
		}
	}
	
	if(count > 0){
		count = count/2;
	}
	
	printf("%d\n",count);
	
}

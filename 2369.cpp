#include <stdio.h>

int main(){
	int cons,preco;
	
	
	scanf("%d",&cons);
	
	if(cons <= 10){
		preco = 7;
		printf("%d",preco);
	}else{
		if(cons > 10 && cons <= 30){
			preco = 7 + 1*(cons - 10);
			printf("%d",preco);
		}else{
			if(cons > 30 && cons <= 100){
				preco = 7 + 20 + 2*(cons - 30);
				printf("%d",preco);
			}else{
				if(cons > 100){
					preco = 7 + 20 + 140 + 5*(cons - 100);
					printf("%d",preco);
				}
			}
		}
	}
}

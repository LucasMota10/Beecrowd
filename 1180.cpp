#include <stdio.h>

int main(){
	int x,i,aux,menor,pos,ok;
	
	aux = 0;
	menor = 0;
	pos = 0;
	
	scanf("%d",&x);
	
	int n[x];
		
	for(i=0;i<x;i++){
		scanf("%d",&n[x]);
		if(i==0){
			aux = n[x];
		}else{
			if(n[x] < aux){
				aux = n[x];
				menor = aux;
				pos = i;
			}else{
				if(aux < n[x]){
					menor = aux;	
				}
			}
		}																	
	}
	printf("Menor valor: %d\nPosicao: %d",aux,pos);
	
}


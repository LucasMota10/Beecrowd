#include <stdio.h>

int main(){
	int n[20],i,aux,aux2,count = 1;

		
	for(i=0;i<20;i++){
		scanf("%d",&n[i]);
		}
	for(i=0;i<20;i++){
		aux = n[20 - count];
		aux2 = aux;
		count++;
		printf("N[%d] = %d\n",i,aux2); 
	}
	}


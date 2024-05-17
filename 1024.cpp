#include <stdio.h>
#include <string.h>

int main(){
	
	int i,num,x,j,y;
	char str[1000];
	
	scanf("%d",&num);
	
	for(i=0;i<num;i++){
		char aux[1000];
		scanf(" %[^\n]s", &str);
		x = strlen(str);
		int count = 1;
		for(j=0;j<x;j++){
			aux[j] = str[x - count];
			count++;
		}
		for(j=0;j<x;j++){
			if((aux[j]>64 && aux[j]<91) || (aux[j]>96 && aux[j]<123)){
				aux[j] = aux[j] + 3;
			}
		}
		for(j=0;j<x;j++){
			if(j >= x/2){
				aux[j] = aux[j] - 1;
			}
		}
	int final = strlen(aux);
	aux[final - 1] = '\0';
	printf("%s\n",aux);
	}
}

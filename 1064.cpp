#include <stdio.h>

int main(){
	float num,media,soma;
	int i,count;
	
	soma = 0;
	count = 0;
	
	for(i=1;i<7;i++){
		scanf("%f",&num);
		if(num > 0){
		soma = soma + num;
		count++;
		}
	}
	media = soma/count;
	printf("%d valores positivos\n%.1f\n",count,media);
	
}

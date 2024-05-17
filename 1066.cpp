#include <stdio.h>

int main(){
	int i,num,count1 = 0,count2 = 0,count3 = 0,count4 = 0;
	
	for(i=1;i<6;i++){
		scanf("%d",&num);
		if(num > 0){
			count1++;
		}
		if(num < 0){
			count2++;
		}
		if(num%2 == 0){
			count3++;
		}
		if(num%2 == 1){
			count4++;
		}
	}
	printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",count3,count4,count1,count2);
}

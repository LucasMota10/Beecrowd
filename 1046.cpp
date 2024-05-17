#include <stdio.h>

int main(){
	
	int i,f,t1,t2;
	
	scanf("%d %d", &i,&f);
	
	if(i >= f){
		t1 = 24-(i-f);
		printf("O JOGO DUROU %d HORA(S)\n", t1);
	}else{
		if(i < f){
			t2 = f-i;
			printf("O JOGO DUROU %d HORA(S)\n",t2);
		}
	}
	
}

#include <stdio.h>

int main(){
	int segundos,minutos,horas,resto1,resto2;
	
	scanf("%d", &segundos);
	
	minutos = segundos/60;
	resto1 = segundos%60;
	horas = minutos/60;
	resto2 = minutos%60;
		
	printf("%d:%d:%d", horas,resto2,resto1);
}

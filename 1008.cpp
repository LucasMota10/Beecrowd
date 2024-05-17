#include <stdio.h>

int main(){
	
	int numero,x;
	float y,salario;
	
	scanf("%d %d", &numero,&x);
	scanf("%f", &y);
	
	salario = x*y;
	
	printf("NUMBER = %d\nSALARY = U$ %f\n", numero,salario);
}

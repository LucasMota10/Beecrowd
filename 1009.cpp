#include <stdio.h>

int main(){
	
	char cliente [30];
	double salario,vendas,total;
	
	scanf("%s", &cliente);
	scanf("%lf %lf", &salario,&vendas);
	
	total = salario + (vendas*0.15);
	
	printf("TOTAL = R$ %.2lf\n", total);
	
}

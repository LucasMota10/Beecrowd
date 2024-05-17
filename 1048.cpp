#include <stdio.h>

int main(){
	
	int percentual;
	float salario,salario2,novosalario,reajuste;
	char p = '%';
	
	scanf("%f", &salario);
	
	if(salario >= 0 && salario <=400){
		reajuste = salario*0.15;
		novosalario = salario + reajuste;
		percentual = 15;
		printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %c\n",novosalario,reajuste,percentual,p);
	}else{
		if(salario > 400 && salario <=800){
		reajuste = salario*0.12;
		novosalario = salario + reajuste;
		percentual = 12;
		printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %c\n",novosalario,reajuste,percentual,p);
	}else{
		if(salario > 800 && salario <= 1200){
		reajuste = salario*0.10;
		novosalario = salario + reajuste;
		percentual = 10;
		printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %c\n",novosalario,reajuste,percentual,p);
	}else{
		if(salario > 1200 && salario <= 2000){
		reajuste = salario*0.07;
		novosalario = salario + reajuste;
		percentual = 7;
		printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %c\n",novosalario,reajuste,percentual,p);
	}else{
		if(salario > 2000){
		reajuste = salario*0.04;
		novosalario = salario + reajuste;
		percentual = 4;
		printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %c\n",novosalario,reajuste,percentual,p);
	}
	}
	}
	}
	}
	
	
}

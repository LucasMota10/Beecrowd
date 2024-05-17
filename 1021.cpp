#include <stdio.h>
#include <math.h>

int main(){
	
	float vm;
	int n100,n50,n20,n10,n5,n2,m1,m5,m25,m10,m05,m01;
	
	scanf("%f",&vm);
	
	n100 = vm/100;
	vm = fmod(vm,100);
	n50 = vm/50;
	vm = fmod(vm,50);
	n20 = vm/20;
	vm = fmod(vm,20);
	n10 = vm/10;
	vm = fmod(vm,10);
	n5 = vm/5;
	vm = fmod(vm,5);
	n2 = vm/2;
	vm = fmod(vm,2);
	m1 = vm/1;
	vm = fmod(vm,1);
	m5 = vm/0.50;
	vm = fmod(vm,0.50);
	m25 = vm/0.25;
	vm = fmod(vm,0.25);
	m10 = vm/0.10;
	vm = fmod(vm,0.10);
	m05 = vm/0.05;
	vm = fmod(vm,0.05);
	m01 = vm/0.01;
	
	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n",n100); 
	printf("%d nota(s) de R$ 50.00\n",n50); 
	printf("%d nota(s) de R$ 20.00\n",n20); 
	printf("%d nota(s) de R$ 10.00\n",n10); 
	printf("%d nota(s) de R$ 5.00\n",n5); 
	printf("%d nota(s) de R$ 2.00\n",n2);
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n",m1);
	printf("%d moeda(s) de R$ 0.50\n",m5);
	printf("%d moeda(s) de R$ 0.25\n",m25);
	printf("%d moeda(s) de R$ 0.10\n",m10);
	printf("%d moeda(s) de R$ 0.05\n",m05);
	printf("%d moeda(s) de R$ 0.01\n",m01); 
}

#include <stdio.h>
#include <math.h>

int main(){
	int x,x2,x3,x4,x5,x6,x7,x8,n100,n50,n20,n10,n5,n2,n1;
	
	scanf("%d", &x);
		
	n100 = x/100;
	x2 = x%100;
	n50 = x2/50;
	x3 = x2%50;
	n20 = x3/20;
	x4 = x3%20;
	n10 = x4/10;
	x5 = x4%10;
	n5 = x5/5;
	x6 = x5%5;
	n2 = x6/2;
	x7 = x6%2;
	n1 = x7/1;
	x8 = x7%1;
	
	printf("%d\n", x);
	printf("%d nota(s) de R$ 100,00\n",n100); 
	printf("%d nota(s) de R$ 50,00\n",n50); 
	printf("%d nota(s) de R$ 20,00\n",n20); 
	printf("%d nota(s) de R$ 10,00\n",n10); 
	printf("%d nota(s) de R$ 5,00\n",n5); 
	printf("%d nota(s) de R$ 2,00\n",n2); 
	printf("%d nota(s) de R$ 1,00\n",n1); 

}

#include <stdio.h>

int main(){
	
	int a,b;
	float t1,t2,t3,t4,t5;
	
	scanf("%d %d", &a,&b);
	
	switch(a){
		case 1:
			t1 = 4.00*b;
			printf("Total: R$ %.2f\n", t1);
			break;
		case 2:
			t2 = 4.50*b;
			printf("Total: R$ %.2f\n", t2);
			break;
		case 3:
			t3 = 5.00*b;
			printf("Total: R$ %.2f\n", t3);
			break;
		case 4:
			t4 = 2.00*b;
			printf("Total: R$ %.2f\n", t4);
			break;
		case 5:
			t5 = 1.50*b;
			printf("Total: R$ %.2f\n", t5);
			break;
	}
}

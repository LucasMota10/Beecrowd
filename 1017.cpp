#include <stdio.h>

int main(){
	
	int vel,t;
	float dis,litro;
	
	scanf("%d %d", &vel,&t);
	
	dis = vel*t;
	
	litro = dis/12;
	
	printf("%.3f\n", litro);
	
	
}

#include <stdio.h>
#include <math.h>

int main(){
	int L,A,P,R,volumeEsfera,volumeCaixa;
	
	scanf("%d %d %d %d",&L,&A,&P,&R);
	
	volumeEsfera = 4*3.14*(pow(R,2));
	volumeCaixa = 2 * (L*A) + 2 * (L*P) + 2 * (A*P);
	
	if(volumeEsfera > volumeCaixa){
		printf("S\n");
	}else{
		printf("N\n");
	}
	
	
}

#include <stdio.h>

int main(){
	int gogre,goint,x,count = 0,inter = 0,gremio = 0,empate = 0;
	
	do{
		scanf("%d %d",&goint,&gogre);
		printf("Novo grenal (1-sim 2-nao)\n");
		scanf("%d",&x);
		count++;
		if(goint > gogre){
			inter++;
		}
		if(gogre > goint){
			gremio++;
		}
		if(gogre == goint){
			empate ++;
		}
	}while(x == 1);
	
	
	printf("%d grenais\n",count);
	printf("Inter:%d\n",inter);
	printf("Gremio:%d\n",gremio);
	printf("Empates:%d\n",empate);
	if(inter > gremio){
		printf("Inter venceu mais\n");
	}
	if(gremio > inter){
		printf("Gremio venceu mais\n");
	}
	if(gremio == inter){
		printf("Nao houve vencedor\n");
	}
	
}

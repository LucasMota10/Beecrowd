#include <stdio.h>

int main(){
	int hrinicial,minicial,hrfinal,mfinal,total1,total2,total3,lhora,lm,total4;
	
	scanf("%d %d %d %d",&hrinicial,&minicial,&hrfinal,&mfinal);
	
	hrinicial = hrinicial*60;
	hrfinal = hrfinal*60;
	
	total1 = hrinicial + minicial;
	total2 = hrfinal + mfinal;
	
	total3 = 1440-(total2 - total1);

    lhora = total3/60;
	lm = total3%60; 
	
	if(total1 == total2){
		printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
		}else{
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",lhora,lm);
		}
}

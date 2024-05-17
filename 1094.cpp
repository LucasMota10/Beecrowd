#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
	int num,i,val,countc,counts,countr,total,totalc,totals,totalr;
	float pc,pr,ps;
	char let[5],x;
	x = '%';
	
	countc = 0;
	counts = 0;
	countr = 0;
	
	scanf("%d",&num);
	
	for(i=0;i<num;i++){
		scanf("%d %s",&val,&let);
		if(strcmp(let,"C") == 0){
			countc = val + countc;
		}
		if(strcmp(let,"R") == 0){
			countr = val + countr;
		}
		if(strcmp(let,"S") == 0){
			counts = val + counts;
		}
	}
	total = countc + countr + counts;
	
	pc = (countc/(total*1.0))*100.00;
	ps = (counts/(total*1.0))*100.00;
	pr = (countr/(total*1.0))*100.00;
	
	printf("Total: %d cobaias\n",total);
	printf("Total de coelhos: %d\n",countc);
	printf("Total de ratos: %d\n",countr);
	printf("Total de sapos: %d\n",counts);
	printf("Percentual de coelhos: %.2f %c\n",pc,x);
	printf("Percentual de ratos: %.2f %c\n",pr,x);
	printf("Percentual de sapos: %.2f %c\n",ps,x);
}

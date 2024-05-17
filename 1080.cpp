#include <stdio.h>

int main(){
	int num,i,maior,pos;
	maior = 0;
	for(i=1;i<101;i++){
		scanf("%d",&num);
		if(num>maior){
			pos = i;
			maior = num;
		}
	}
	printf("%d\n%d\n",maior,pos);
}

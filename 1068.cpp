#include <stdio.h>
#include <string.h>

int main(){
	
	char str[1000];
	
	while(scanf("%s",str) != EOF){
		int par1 = 0,par2 = 0;
		for(int i = 0; i<strlen(str); i++){
			if(str[i] == '(' ){
				par1++;
			}
			if(str[i] == ')'){
				par2++;
			}
		}
		if(par1 == par2){
			printf("correct\n");
		}else{
			printf("incorrect\n");
		}
	}
}

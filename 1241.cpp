#include <stdio.h>
#include <string.h>
int main(){
	int z,n,x,y,j,b;
	char str1[100],str2[100];
	
	scanf("%d",&n);
	
	for(int i = 0;i < n; i++){
		int count = 0;
		scanf(" %s",str1);
		scanf(" %s",str2);
		x = strlen(str1);
		y = strlen(str2);
		z = x-y;
		if(y > x){
			printf("nao encaixa\n");
		}else{
			if(x > y){
				for(j = 0;j < y; j++){
				if(str1[z+j] == str2[j]){
					count++;
				}
			}
			if(count == y){
				printf("encaixa\n");
			}else{
				printf("nao encaixa\n");
			}
			}else{
				if(x == y){
					for(b = 0;b<x;b++){
						if(str1[b] == str2[b]){
							count++;
						}
						}
						if(count == y){
					printf("encaixa\n");
					}else{
					printf("nao encaixa\n");
					}
					}
				}
			}
		}
	str1[0] = '\0';
	str2[0] = '\0';
	}


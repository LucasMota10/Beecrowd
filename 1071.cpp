#include <stdio.h>

int main(){
	int x,y,i,aux,z;
	
	scanf("%d %d",&x,&y);
	
	if(x > y){
		aux = 0;
		for(i=y+1;i<x;i++){
			if(i%2==1 || i%2==-1){
			aux+=i;
			}
		}
	}
	if(y > x){
		aux = 0;
		for(i=x+1;i<y;i++){
		if(i%2==1 || i%2==-1){
			aux+=i;	
			}
		}
	}
	if(x == y){
		printf("0\n");
	}
	printf("%d\n",aux);
}

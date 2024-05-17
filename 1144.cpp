#include <stdio.h>

int main(){
	int n,x,y,z,a;
	scanf("%d",&n);
	
	for(int i = 1; i <= n; i++){
		x = i*i;
		y = x*i;
		printf("%d %d %d\n",i,x,y);
		z = x + 1;
		a = y+1;
		printf("%d %d %d\n",i,z,a);
	}
}

#include <stdio.h>

main(){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	
	if(a < b && a < c){
		printf("%d\n",a);
		if(b < c){
			printf("%d\n%d\n",b,c);
		}
		if(c < b){
			printf("%d\n%d\n",c,b);
		}
	}else{
		if(b < a && b < c){
			printf("%d\n",b);
			if(a < c){
				printf("%d\n%d\n",a,c);
			}
			if(c < a){
				printf("%d\n%d\n",c,a);
			}
		}else{
			if(c < a && c < b){
				printf("%d\n",c);
				if(a < b){
					printf("%d\n%d\n",a,b);
				}
				if(b < a){
					printf("%d\n%d\n",b,a);
				}
			}
		}
	}
	printf("\n");
	printf("%d\n%d\n%d\n",a,b,c);
}

#include <stdio.h>
#include <string.h>

int main(){
	char string[20];
	
	scanf("%s",string);
	
	if(strlen(string) >= 10){
		printf("palavrao\n");
	}else{
		printf("palavrinha\n");
	}
}

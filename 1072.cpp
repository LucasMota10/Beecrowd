#include <stdio.h>

int main(){
	int i,num,val,count,count2;
	scanf("%d",&num);
	
	count = 0;
	count2 = 0;
		
	for(i=0;i<num;i++){
		scanf("%d",&val);
		if(val >= 10 && val <=20){
			count++;
		}else{
			count2++;
		}
	}
	printf("%d in\n%d out\n",count,count2);
}

#include <stdio.h>
#include <math.h>

int main(){
	
	int num,i;
	float x,y,z,media;
	
	scanf("%d",&num);
	
	for(i=0;i<num;i++){
		scanf("%f %f %f",&x,&y,&z);
		media = (x*2 + y*3 + z*5)/10;
		
		printf("%.1f\n",media);
		
	}
}

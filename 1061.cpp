#include <stdio.h>
#include <math.h>

int main(){
	int w1,x1,y1,z1,w2,x2,y2,z2,t1,t2,t3,w3,x3,y3,z3;
	char d1[10],d2[10];
	
	scanf("%s %d %d : %d : %d %s %d %d : %d : %d",&d1,&w1,&x1,&y1,&z1,&d2,&w2,&x2,&y2,&z2);

	w1 = w1*86400;
	x1 = x1*3600;
	y1 = y1*60;
	z1 = z1;
	w2 = w2*86400;
	x2 = x2*3600;
	y2 = y2*60;
	z2 = z2;
	
	t1 = w1 + x1 + y1 + z1;
	t2 = w2 + x2 + y2 + z2;
	
	t3 = t2 - t1;
	
	w3 = t3/86400;
	t3 = t3%86400;
	x3 = t3/3600;
	t3 = t3%3600;
	y3 = t3/60;
	z3 = t3%60;
	
	printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",w3,x3,y3,z3);
}
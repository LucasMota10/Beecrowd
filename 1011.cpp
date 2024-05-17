#include <stdio.h>
#include <math.h>

int main(){
	double pi,R,volume;
	pi = 3.14159;
	scanf("%lf", &R);
	
	volume = (4*pi*pow(R,3))/3;
	
	printf("VOLUME = %.3lf\n",volume);
}

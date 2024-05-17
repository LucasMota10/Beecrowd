#include <stdio.h>

int main(){
	double A,B,C,n1,n2,n3;
	
	scanf("%lf %lf %lf",&n1,&n2,&n3);
	
	if( n1 > n2 && n1 > n3){
		A = n1;
		if(n2 > n3){
			B = n2;
			C = n3;
		}else{
			B = n3;
			C = n2;
		}
	}else{
		if(n2 > n1 && n2 > n3){
			A = n2;
			if(n1 > n3){
				B = n1;
				C = n3;
			}else{
				B = n3;
				C = n1;
			}
		}else{
			A = n3;
			if(n1 > n2){
				B = n1;
				C = n2;
			}else{
				B = n2;
				C = n1;
			}
		}
	}
	
	if(A >= B+C){
		printf("NAO FORMA TRIANGULO\n");
	}else{

	if((A*A) == (B*B + C*C)){
		printf("TRIANGULO RETANGULO\n");
	}
	if((A*A) > (B*B + C*C)){
		printf("TRIANGULO OBTUSANGULO\n");
	}
	if((A*A) < (B*B + C*C)){
		printf("TRIANGULO ACUTANGULO\n");
	}
	if(A == B && A == C && B == C){
		printf("TRIANGULO EQUILATERO\n");
	}
	if(((A == B) && (A != C)) || ((A == B) && (A != C)) || ((B == C) && (B != A))){
		printf("TRIANGULO ISOSCELES\n");
	}
	}
}

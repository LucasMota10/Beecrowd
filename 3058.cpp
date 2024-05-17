#include <bits/stdc++.h>
using namespace std;

int main(){
	int i,merc,gramas;
	float preco,menorp,t,total;
	
	cin >> merc;
	
	for(i=0;i<merc;i++){
		cin >> preco >> gramas;
		t = preco/gramas;
		total = t*1000;
		if(i == 0){
			menorp = total;
		}else if(menorp > total){
			menorp = total;
		}	
		}
		printf("%.2f\n",menorp);
	}
	
#include <bits/stdc++.h>
using namespace std;

int main(){
   
   long long n; cin >> n;
   
   for(long long i = 0;i<n;i++){
       
       long long num1, num2; cin >> num1 >> num2;
       long long soma1 = 0, soma2 = 0;
       long long base = 2;
       long long resto1 = 0, resto2 = 0;
       long long i1 = 0, i2 = 0;
       
       while (num1 > 0) {
            resto1 = num1 % 10; // Calcula o dígito binário menos significativo
            soma1 = soma1 + (resto1 * pow(base, i1)); // Converte e acumula o dígito binário em decimal
            num1 = num1 / 10; // Remove o dígito binário processado
            i1 += 1; // Incrementa o expoente da base (2)
        }
        
        while (num2 > 0) {
            resto2 = num2 % 10; // Calcula o dígito binário menos significativo
            soma2 = soma2 + (resto2 * pow(base, i2)); // Converte e acumula o dígito binário em decimal
            num2 = num2 / 10; // Remove o dígito binário processado
            i2 += 1; // Incrementa o expoente da base (2)
        }
        
        //cout << "Num1 : " << soma1 << endl << "Num2 :" << soma2 << endl;
         int num;
        while(num2 != 0){
            
            num = num1 % num2;
            num1 = num2;
            num2 = num;
        }

        int novo = num1;
        
        if(novo == 1) printf("Pair #%d: Love is not all you need!\n", i+1);
        else printf("Pair #%d: All you need is love!\n", i+1);
        }     
   }
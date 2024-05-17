#include <bits/stdc++.h>
using namespace std;


int main(){
    char str[100];
    int countM,countm,countnum,falso;

    while(scanf(" %[^\n]s",str) != EOF){
        countM = 0;
        countm = 0;
        countnum = 0;
        falso = 0;
        int tam = strlen(str);
        for(int i = 0;i<tam;i++){
            if(str[i] >= 65 && str[i] <= 90){
                countM++;
            }
            if(str[i] >= 97 && str[i] <= 122){
                countm++;
            }
            if(str[i] >= 48 && str[i] <= 57){
                countnum++;
            }
            if((str[i] >= 32 && str[i] <= 47) || (str[i] >= 58 && str[i] <= 64) || (str[i] >= 91 && str[i] <= 96) || (str[i] >= 123 && str[i] <= 126)){
                falso = 1;
            }
        }

        if(tam < 6 || tam > 32 || falso == 1){
            cout << "Senha invalida." << endl;
        }else{
            if(countM > 0 && countm > 0 && countnum > 0){
                cout << "Senha valida." << endl;
            }else{
                cout << "Senha invalida." << endl;
            }
        }

    } 
}
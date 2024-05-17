#include <bits/stdc++.h>
using namespace std;

int main(){

    int mat[4][7];

    for(int i = 0;i<4;i++){
        for(int j = 0;j<7;j++){
            cin >> mat[i][j];
        }
    }

    int maior = 0;

    for(int i = 0;i<4;i++){
        int count = 0;
        for(int j = 0;j<7;j++){
            count+= mat[i][j];
        }
        if(count >= maior){
            maior = count;
        }    
    }

    vector<int> binario;
    int decimal = maior;

    while(decimal >= 1){
        int resto;
        resto = decimal%2;
        binario.push_back(resto);
        decimal = decimal/2;
    }

    int aux;
    for(int i = 0, j = binario.size()-1;i<binario.size()/2;i++,j--){
        aux = binario[i];
        binario[i] = binario[j];
        binario[j] = aux;
    }

    cout << maior << " = "; 
    
    if(binario.size() == 0){
        cout << 0 << endl;
    }else{

    for(int i = 0;i<binario.size();i++){
        cout << binario[i];
    }
    cout << endl;
    }
}
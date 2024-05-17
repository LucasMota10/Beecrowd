#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n; cin >> n;

    int branca,preta;

    n = n*n;

    if(n%2==0){
        branca = n/2;
        preta = branca;
    }else{
        branca = n/2+1;
        preta = branca-1;
    }

    cout << branca << " casas brancas e " << preta << " casas pretas" << endl;
}
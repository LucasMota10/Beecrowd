#include <bits/stdc++.h>
using namespace std;

int main(){

     long long a,b,c; cin >> a >> b >> c;
    char tipo; cin >> tipo;

     long long resp = 0;
    if(tipo == 'A'){
        resp = b*1.5 + c*2.5 + a;
    }
    if(tipo == 'B'){
        resp = b + (c*2.5)/1.5 + a/1.5;  
    }
    if(tipo == 'C'){
        resp = c + a/2.5 + (b*1.5)/2.5;
    }

    cout << resp << endl;
}
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second
#define pb push_back

typedef long long ll;
typedef pair<int,int> ii;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int mdc(int a, int b){ 
    int resto;

    while(b != 0){
        resto = a % b;
        a = b;
        b = resto;

    }
    return a;
}


int main(){ _ // TDA RACIONAL

    int n; cin >> n;
    int n1,d1,n2,d2;
    char b1,b2,sinal;
    int m;
    int numerador,denominador;

    for(int i = 0; i<n;i++){
        
        cin >> n1 >> b1 >> d1 >> sinal >> n2 >> b2 >> d2;
        // cout << n1 << endl << b1 << endl << d1 << endl << sinal << endl << n2 << endl << b2 << endl << d2 << endl;
        if(sinal == '+'){
            numerador = (n1*d2 + n2*d1);
            denominador = (d1*d2);
        }
        if(sinal == '-'){
            numerador = (n1*d2 - n2*d1);
            denominador = (d1*d2);
        }   
        if(sinal == '*'){
            numerador = (n1*n2);
            denominador = (d1*d2);
        }
        if(sinal == '/'){
            numerador = (n1*d2);
            denominador = (n2*d1);
        }
        cout << numerador << '/' << denominador << " = ";
        m = mdc(numerador,denominador);
        numerador = numerador/m;
        denominador = denominador/m;
        if(denominador < 0){
            numerador = -1*numerador;
            denominador = -1*denominador;
        }
        cout << numerador << '/' << denominador << endl;

    }
    return 0;
}
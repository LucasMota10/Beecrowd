#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second
typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){ _

    int valor; cin >> valor;
    int parcela; cin >> parcela;

    if(valor%parcela == 0){
            int resposta = valor/parcela;
            for(int i = 0;i<parcela;i++){
                cout << resposta << endl;
            }
    }else{

        int resto = valor%parcela;
        int div = valor / parcela;

        for(int i = 0;i<resto;i++){
            cout << div+1 << endl;
        }
        for(int i = 0;i<parcela-resto;i++){
            cout << div << endl;
        }
    }
    return 0;
}
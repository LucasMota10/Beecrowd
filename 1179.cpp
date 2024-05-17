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

int main(){ _

    vector<int> par;
    vector<int> impar;

    for(int i = 0;i<15;i++){
        int num; cin >> num;
        
        if(par.size() == 5){
            cout << "par[0] = " << par[0] << endl;
            cout << "par[1] = " << par[1] << endl;
            cout << "par[2] = " << par[2] << endl;
            cout << "par[3] = " << par[3] << endl;
            cout << "par[4] = " << par[4] << endl;
            par.clear();
        }
        if(impar.size() == 5){
            cout << "impar[0] = " << impar[0] << endl;
            cout << "impar[1] = " << impar[1] << endl;
            cout << "impar[2] = " << impar[2] << endl;
            cout << "impar[3] = " << impar[3] << endl;
            cout << "impar[4] = " << impar[4] << endl;
            impar.clear();
        }
        if(num%2 == 0){
            par.pb(num);
        }else{
            impar.pb(num);
        }
    }
    
    if(impar.size() >= 1){
        for(int i = 0; i<impar.size() ;i++){
            cout << "impar[" << i << "] = " << impar[i] << endl; 
        }
    }
    if(par.size() >= 1){
        for(int i = 0; i<par.size() ;i++){
            cout << "par[" << i << "] = " << par[i] << endl; 
        }
    }

    return 0;
}
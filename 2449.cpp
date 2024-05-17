#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, altura; cin >> n >> altura;

    vector<int> maior, menor;
    int pino;
    for(int i = 0;i<n;i++){
        cin >> pino;
        if(pino > altura){
            maior.push_back(pino);
        }
        if(pino < altura){
            menor.push_back(pino);
        }
    }

    int resp = 0;
    
    resp = altura - *min_element(menor.begin(),menor.end());
    resp = resp + (*max_element(maior.begin(), maior.end()) - altura);
    

    cout << resp << endl;

}
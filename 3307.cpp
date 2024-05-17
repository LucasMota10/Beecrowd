#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;

    for(int i = 0;i<n;i++){
        int area; cin >> area;

        double raio = sqrt(area/12.56);
        float val_cm2;
        if(raio < 12){
            cout << "vermelho = ";
            val_cm2 = 0.09;

        }
        if(raio >= 12 && raio <= 15){
            cout << "azul = ";
            val_cm2 = 0.07;
        }
        if(raio > 15){
            cout << "amarelo = ";
            val_cm2 = 0.05;
        }
        cout << fixed << setprecision(2);
        cout << "R$ " << val_cm2*area << endl;
    }
}
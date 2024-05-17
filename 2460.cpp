#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; cin >> n;

    vector<int> fila;

    int num;

    for(int i = 0;i<n;i++){
        cin >> num;
        fila.push_back(num);
    }

    int sai; cin >> sai;
    vector<int>::iterator it;

    for(int i = 0;i<sai;i++){
        cin >> num;
        it = find(fila.begin(),fila.end(),num);
        fila.erase(it);
    }

    for(int i = 0;i<fila.size();i++){
        if(i == fila.size()-1){
            cout << fila[i];
        }else{
             cout << fila[i] << " ";
        }
    }

    cout << endl;

}
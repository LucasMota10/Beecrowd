#include <bits/stdc++.h>

using namespace std;

int main() {

    string numero, n1, n2;
    long long int n1n, n2n, r = 10;
    cin >> numero;
    cout << numero << endl;

    while(r >= 10){
        
    n1 = numero.substr(0, numero.size() - 1);
    n2 = numero.substr(numero.size() -1, numero.size() - 1);
    n1n = stoi(n1);
    n2n = stoi(n2);
    r = (n1n * 3) + n2n;
    stringstream ss;
    ss << r;
    numero = ss.str();
    cout << numero << endl;
    }

}
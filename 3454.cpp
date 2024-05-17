#include <bits/stdc++.h>
using namespace std;


int main(){

    string velha;
    cin >> velha;
    
    if(velha == "OOO" || velha == "OXO" || velha == "OOX" || velha == "XXX" || velha == "XOO"){
        cout << "?" << endl;
    }else{
        if(velha == "XXO" || velha == "OXX"){
            cout << "Alice" << endl;
        }else{
            cout << "*" << endl;
        }
    }


}
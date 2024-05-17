#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; cin >> n;

    for(int i = 0;i<n;i++){
        int min; cin >> min;
        string temp; cin >> temp;

        if(temp == "1T"){
            if(min <= 45){
                cout << min << endl;
            }else{
                cout << 45 << "+" << min-45 << endl;
            }
        }
        if(temp == "2T"){
             if(min <= 45){
                cout << min+45 << endl;
            }else{
                cout << 90 << "+" << min-45 << endl;
            }
        }
    }
}
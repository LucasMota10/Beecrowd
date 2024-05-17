#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n; cin >> n;
    vector<long long int> bal;
    for(long long int i = 0;i<n;i++){
        long long int num; cin >> num;
        bal.push_back(num);
    }
    
    int resposta = n;

    vector<bool> estourou(n,false);

    for(long long int i = 0;i<bal.size();i++){
        long long int ref = bal[i];
        for(long long int j = i+1;j<bal.size();j++){
            if(estourou[j] == false){
                if(ref == bal[j]+1){
                ref--;
                resposta--;
                estourou[j] = true;
                }
            }
        }
    }

    cout << resposta << endl;
    
}
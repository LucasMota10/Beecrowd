#include <bits/stdc++.h>
using namespace std;

int main(){ 


    int n; cin >> n;
    cin.ignore();
    string dieta,cafe,almoco;
    int pos,val;
    
    for(int i = 0;i<n;i++){
        
        val = 0;

            getline(cin,dieta);
            getline(cin,cafe);
            getline(cin,almoco);
        

        for(int j = 0;j<cafe.size();j++){
            pos = dieta.find(cafe[j]);
            if(pos == -1){
                val = 1;
                cout << "CHEATER" << endl;
                continue;
            }else{
                dieta.erase(pos,1);
            }
        }

        for(int j = 0;j<almoco.size();j++){
            pos = dieta.find(almoco[j]);
            if(pos == -1){
                val = 1;
                cout << "CHEATER" << endl;
                continue;
            }else{
                dieta.erase(pos,1);
            }
        }

        sort(dieta.begin(), dieta.end());

        if(val == 0){
           cout << dieta << endl; 
        }
    }
}
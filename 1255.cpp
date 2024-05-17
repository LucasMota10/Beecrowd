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

int main()
{ _
    int n = 0; cin >> n;
    
    for(int i = 0; i<n;i++){
        
        string str;
        vector<char> resp;
        vector<int> conta;
        vector<char> respofc;
        
         if(i == 0 || i == n-1){
            cin.ignore(); 
            getline(cin,str);      
        }else{
            getline(cin,str);
        }
        
        int n = sizeof(str) / sizeof(str[0]);
        
        for(int j = 0;j<str.size();j++){
            if(str[j] >= 65 && str[j] <= 90){
                str[j] = str[j] + 32;
            }
            if(str[j] >= 97 && str[j] <= 122){
                resp.pb(str[j]);
            }
        }
        
        sort(resp.begin(), resp.end());
        
        for(int j = 0;j<resp.size();j++){
            conta.pb(count(resp.begin(), resp.end(), resp[j]));
        }
        
        int x = *max_element (conta.begin(), conta.end());
        
        for(int j = 0;j<resp.size();j++){
            if(count(resp.begin(), resp.end(), resp[j]) == x){
                respofc.pb(resp[j]);
                if(x != 1){
                    if(j+x <= resp.size()){
                    j = j + x;
                }
                }
            }
        }
        
        cout << endl;
        for(int j = 0;j<respofc.size();j++){
            cout << respofc[j];
        }
        
        resp.clear();
        respofc.clear();
        conta.clear();
        
    }

    return 0;
}
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

    int n; cin >> n;

    for(int i = 0;i<n;i++){
        string str,resp;
        resp.clear();

        if(i == 0){
            cin.ignore(); 
            getline(cin,str);      
        }else{
            getline(cin,str);
        }
        for(int j = 0;j<str.size();j++){
            if(str[j] != 32){
                if(j == 0){
                    resp.pb(str[0]);
                }else{
                    if(str[j-1] == 32){
                    resp.pb(str[j]);
                    }
                }
            }
        }
        cout << resp << endl;
        resp.clear();
    }
    return 0;
}
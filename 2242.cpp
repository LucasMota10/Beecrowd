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

    string str; cin >> str;
    string risada;
    string invert;

    for(int i = 0;i<str.size();i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            risada+= str[i];
        }
    }

    invert = risada;
    reverse(invert.begin(), invert.end());
    if(risada == invert){
        cout << "S" << endl;
    }else{
        cout << "N" << endl;
    }


}
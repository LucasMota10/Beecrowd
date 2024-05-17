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


int main(){
    int n; cin >> n;
    int num;

    vector<int> vetpar,vetimpar;

    for(int i = 0; i<n;i++){

        cin >> num;
        if(num%2==0){
            vetpar.pb(num);
        }else{
            vetimpar.pb(num);
        }
    }

    sort(vetpar.begin(), vetpar.end());

    sort(vetimpar.begin(), vetimpar.end(), greater<int>());

    for(int i = 0;i<vetpar.size();i++){
        cout << vetpar[i] << endl;
    }
    for(int i = 0;i<vetimpar.size();i++){
        cout << vetimpar[i] << endl;
    }
}
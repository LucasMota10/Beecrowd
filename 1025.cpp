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

    int n,q;
    vector<int> pedras;
    vector<int>:: iterator it;

    int num;
    int consulta[q+200];
    int count = 0;
    do{
        cin >> n >> q;

        if(n == 0 && q == 0){
            break;
        }

        count++;
        for(int i = 0;i<n;i++){
            cin >> num;
            pedras.pb(num);
        }

        sort(pedras.begin(), pedras.end());

        cout << "CASE# " << count << ":" << endl;
        
        for(int i = 0;i<q;i++){
            cin >> consulta[i];
            it = find(pedras.begin(), pedras.end(), consulta[i]);

            if(it != pedras.end()){
                 cout << consulta[i] << " found at " << it - pedras.begin() + 1 << endl;
            }else{
                cout << consulta[i] << " not found" << endl;
            }
        }
        consulta[q+200] = {0};
        pedras.clear();
    }while(n != 0 && q != 0);
}
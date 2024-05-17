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
    char op; cin >> op;
    float sum = 0;

    float mat[12][12];
        cout << fixed << setprecision(1);

    for(int i = 0;i<12;i++){
        for(int j = 0;j<12;j++){
            cin >> mat[i][j];
        }
    }

    for(int i = 0;i<12;i++){
        sum = sum+mat[i][n];
    }
    if(op == 'S'){
        cout << sum << endl;
    }else{
        cout << sum/12 << endl;
    }

    return 0;
}
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

    float mat[12][12];

    cout << setprecision(1) << fixed; 

    char str; cin >> str;

    for(int i = 0;i<12;i++){
        for(int j = 0;j<12;j++){
            cin >> mat[i][j];
        }
    }

    float sum = 0;

    for(int i = 0;i<11;i++){
        for(int j = 10-i;j>=0;j--){
            sum = sum + mat[i][j];
        }
    }

    if(str == 'S'){
        cout << sum << endl;
    }
    if(str == 'M'){
        cout << sum/66 << endl;
    }

    return 0;
}
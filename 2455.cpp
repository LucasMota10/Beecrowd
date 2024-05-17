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

    int p1,c1,p2,c2; cin >> p1 >> c1 >> p2 >> c2;

    int m1 = p1*c1;
    int m2 = p2*c2;

    if(m1 == m2) {
        cout << "0" << endl;
    }
    if(m1 > m2) {
        cout << "-1" << endl;
    }
    if(m1 < m2) {
        cout << "1" << endl;
    }
    return 0;
}
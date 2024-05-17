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

    unsigned long long n1, n2; cin >> n1 >> n2;

    unsigned long long sum = 0;

    for(int i = n1; i <= n2;i++){ //On
        for(int j = 0;j<2;j++){ // On
           continue;
        }
        sum += i;
    }



// On + On = On


    cout << sum << endl;
}
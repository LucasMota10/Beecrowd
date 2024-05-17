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

    int a,b,c; cin >> a >> b >> c;

    if(b<a && c>=b){ // 1
        cout << ":)" << endl;
    }else{
        if(b>a && c<=b){ // 2
            cout << ":(" << endl;
        }else{
            if(b > a && c > a && c-b < b-a){ // 3
                 cout << ":(" << endl;
            }else{
                if(b > a && c > a && c-b >= b-a){ // 4
                 cout << ":)" << endl;
                }else{
                    if(b < a && c < b && b-c < a-b){ // 5
                        cout << ":)" << endl;
                    }else{
                        if(b < a && c < b && b-c >= a-b){ // 6
                            cout << ":(" << endl;
                        }else{
                            if(a == b){
                                if(c > b){
                                   cout << ":)" << endl; 
                                }else{
                                    cout << ":(" << endl;
                                }
                            }
                        }
                    }
                }
            }
        }
    }


    return 0;
}
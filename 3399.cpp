#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,N; cin >> a >> b >> c >> N;
    int r = b-a;

    int resp = a+(N*r)-r;

    cout << resp << endl;

}
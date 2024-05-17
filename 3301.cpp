#include <bits/stdc++.h>
using namespace std;

int main(){

    int H,Z,L; cin >> H >> Z >> L;

    if((H > Z && H < L) || (H > L && H < Z)){
        cout << "huguinho" << endl;
    }
    if((Z > H && Z < L) || (Z > L && Z < H)){
        cout << "zezinho" << endl;
    }
    if((L > H && L < Z) || (L > Z && L < H)){
        cout << "luisinho" << endl;
    }
}
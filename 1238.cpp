#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second
typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){ _

    int x; cin >> x;

    for(int i = 0;i<x;i++){
        string str1; cin >> str1;
        string str2; cin >> str2;
        
        int size1 = str1.size();
        int size2 = str2.size();

        int sizemax = max(size1,size2);

        string resposta = "";

        for(int j = 0;j<sizemax;j++){
            if(j > size1 - 1){
                resposta = resposta + str2[j];
            }else{
                if(j > size2 - 1){
                    resposta = resposta + str1[j];
                }else{
                    resposta = resposta + str1[j] + str2[j];
                }
            }
        }
        cout << resposta << endl;
    }
    return 0;
}
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

	char num;
	string code,code2;
	while(1){

		code2.clear();
		int count = 0;
		cin >> num >> code;

		if(num == '0' && code == "0"){
			return 0;
		}

		for(int i = 0;i<code.size();i++){
			if(code[i] != num){
				if((code[i] == '0') && (count == 0)){
					continue;
				}else{
					code2.pb(code[i]);
					count = 1;
				}
			}
		}

		if(code2.empty()){
			cout << "0" << endl;
		}else{
			cout << code2 << endl;	
		}				

	}

    return 0;
}
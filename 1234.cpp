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
	
	string str;

	while(getline(cin,str)){
		int count = 0;
		for(int i = 0;i<str.size();i++){
			if(str[i] == 32){
				continue;
			}
			if(count%2 == 0){
				if(str[i] >= 97 && str[i] <= 122){
					str[i] = str[i] - 32;
				}
				count++;
			}else if(count%2 == 1){
				if(str[i] >= 65 && str[i] <= 90){
					str[i] = str[i] + 32;
				}
				count++;
			}
		}
		cout << str << endl;
	}


}
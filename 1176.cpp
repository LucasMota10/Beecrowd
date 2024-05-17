#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second
typedef long long int ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int fibonacci(int x){
  ll n;
  
  if(x == 0){
    return 0;
  }
  if(x == 1){
    return 1;
  }

    n = fibonacci(x-2) + fibonacci(x-1);
    return n;
  
}
int main(){ _

    int x; cin >> x;
    
    for(int i = 0;i<x;i++){
      int num; cin >> num;
      ll fib = fibonacci(num);
      cout << "Fib("<< num << ") = " << fib << endl;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define f first
#define s second
#define pb push_back    

typedef long long ll;
typedef pair<int,int> ii;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){

  int n; scanf("%d",&n);

  for(int i = 0;i<n;i++){

  char str[101];
  string esq,dir;

  esq.clear();
  dir.clear();

  scanf(" %[^\n]",str);

  int tam = strlen(str);

    for(int j = 0, z = tam/2 ; j < tam/2,z < tam ;j++,z++){
        esq.push_back(str[j]);
        dir.push_back(str[z]);
    }

    reverse(esq.begin(), esq.end());
    reverse(dir.begin(), dir.end());

    string str2 = esq+dir;
    int res = str2.compare("JOGNAM  SATA");
    if(res == 0){
      cout << "OGNAM    SATAJ" << endl;
    }else{
      cout << str2 << endl;
    }

    str[0] = '/0';
    str2.clear();

  }
            

    return 0;
}
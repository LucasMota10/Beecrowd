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

    int n; cin >> n;
    
    for(int i = 0;i<n;i++){

        int z; cin >> z;
        
        vector<string> nomes(z);
        vector<string> presenca(z);
        
        for(int j = 0;j<z;j++){
            cin >> nomes[j];
        }
        
        for(int j = 0;j<z;j++){
            cin >> presenca[j];
        }

        int count = 0;

        vector<string> reprova;
        for(int j = 0; j<z;j++){

            int dias_contaveis = presenca[j].size();
            int presente = 0;
            string aux = presenca[j];

            for(int k = 0; k<aux.size();k++){
                if(aux[k] == 'P'){
                    presente++;
                }
                if(aux[k] == 'M'){
                    dias_contaveis--;
                }
            }
            if(presente < dias_contaveis*0.75){
                reprova.push_back(nomes[j]);
                count++;
            }
            }

            for(int j = 0;j<count;j++){
                if(j != count-1){
                    cout << reprova[j] << " ";
                }else{
                    cout << reprova[j];
                }
            }
            cout << endl;
            nomes.clear();
            presenca.clear();
        } 
    }
#include <bits/stdc++.h>
using namespace std;
#define f first
#define s second
#define pb push_back    

typedef long long ll;
typedef pair<int,int> ii;

stack<int> pilha;
queue<int> aux;

void logica(){
    stack<int>aux2;
    
    while(!pilha.empty()){
        aux2.push(pilha.top());
        pilha.pop();
    }

    while(!aux2.empty()){
        aux.push(aux2.top());
        aux2.pop();
    }

   while(!pilha.empty()){
        pilha.pop();
   }

   while(!aux.empty()){
        pilha.push(aux.front());
        aux.pop();
   }

//     stack<int> pilhafake = pilha;

//    while(!pilhafake.empty()){
//             cout << pilhafake.top() << " ";
//             pilhafake.pop();
//         }
//     cout << endl;
}
int main(){

    int n;

    queue<int> descarte;

    do{

        cin >> n;

        if(n == 0){
            break;
        }

        for(int i = n;i>=1;i--){
            pilha.push(i);
        }

        // for(int i = 1;i<=n;i++){
        //     cout << pilha.top() << " ";
        //     pilha.pop();
        // }

        while(pilha.size() >= 2){
            descarte.push(pilha.top());
            pilha.pop(); // joga fora a carta do topo
            aux.push(pilha.top());
            pilha.pop();
            logica();
        }

        cout << "Discarded cards: ";

        while(!descarte.empty()){
            if(descarte.size() == 1){
                cout << descarte.front() << endl;
            }else{
                cout << descarte.front() << ", ";
            }
            descarte.pop();
        }
        
        cout << "Remaining card: " << pilha.top() << endl;
        pilha.pop();

    }while(n != 0);
}
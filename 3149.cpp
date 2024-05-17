#include <bits/stdc++.h>
using namespace std;

int main(){
    int med_temp, num; cin >> med_temp >> num;
    vector<int> tempo(1100);
    vector<string> nome(1100,"aaaaa");

    for(int i = 0;i<num;i++){
        int a1, a2;
        char name[150];
        scanf("%d:%d",&a1,&a2);
        scanf(" %s", name);
        a1 = a1*60;
        a1 = a1+a2;

        if(a1 >= 24*60-med_temp && a1 <= 24*60){
            tempo.push_back(a1);
            nome.push_back(name);
        }else{
            if(a1 >= 0 && a1 <= med_temp){
                a1+= 24*60;
                tempo.push_back(a1);
                nome.push_back(name);
            }
        }
        name[0] = '\0';   
    }

    for(int i = 0;i<nome.size();i++){
         int aux;
         string aux2;
        for(int j = i+1;j<nome.size();j++){
            if(tempo[i] > tempo[j]){
               aux = tempo[i];
               aux2 = nome[i];
               tempo[i] = tempo[j];
               nome[i] = nome[j];
               tempo[j] = aux;
               nome[j] = aux2;
            }
        }
    }

    for(int i = 0;i<nome.size();i++){
        if(nome[i] != "aaaaa"){
            cout << nome[i] << endl;
        }
        
    }

}
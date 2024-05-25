#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;

    vector<int> palpite(n);
    vector<int> erro(n);
    vector<int> resposta;

    for(int i = 0;i<n;i++){
        cin >> palpite[i];
    }

    for(int i = 0;i<n;i++){
        cin >> erro[i];
    }

    for(int i = 0;i<n;i++){
        int aux1, aux2;

        for(int j = 0;j<n;j++){
            aux1 = palpite[i]+erro[i];
            aux2 = palpite[i]-erro[i];

            resposta.push_back(aux1);
            resposta.push_back(aux2);
        }
        
    }

    sort(resposta.begin(),resposta.end());

    int count = 0;
    unordered_map<int, int> frequencyMap;

    for (int num : resposta) {
        frequencyMap[num]++;
    }

    // Encontrar a frequência máxima
    int maxCount = 0;
    for (const auto& pair : frequencyMap) {
        if (pair.second > maxCount) {
            maxCount = pair.second;
        }
    }

    // Encontrar todos os elementos com a frequência máxima
    std::vector<int> mostFrequentElements;
    for (const auto& pair : frequencyMap) {
        if (pair.second == maxCount) {
            mostFrequentElements.push_back(pair.first);
        }
    }

    sort(mostFrequentElements.begin(),mostFrequentElements.end());
    for(int i = 0;i<mostFrequentElements.size();i++){
        cout << mostFrequentElements[i] << endl;
    }


    //vector<pair<int, int>> repete;

    // for(int i = 0;i<resposta.size();i++){

    //     if(resposta[i] == resposta[i+1]){
    //         count++;
    //     }else{ 
    //         repete.push_back
    //         first = resposta[i];
    //         repete.second = count;
    //         count = 0;
    //     }
    // }     

}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int med_temp, num;
    cin >> med_temp >> num;

    vector<pair<int, string>> relatos;

    for (int i = 0; i < num; i++) {
        int horas, minutos;
        char name[150];
        scanf("%d:%d", &horas, &minutos);
        scanf(" %s", name);

        int total_minutos = horas * 60 + minutos;

        if ((total_minutos >= 24 * 60 - med_temp && total_minutos <= 24 * 60) ||
            (total_minutos >= 0 && total_minutos <= med_temp)) {
            if (total_minutos <= med_temp) {
                total_minutos += 24 * 60;
            }
            relatos.emplace_back(total_minutos, string(name));
        }
    }

    sort(relatos.begin(), relatos.end());

    for (const auto& relato : relatos) {
        cout << relato.second << endl;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){

    long long a,b; cin >> a >> b;

    string str1,str2; cin >> str1 >> str2;

    str1.resize(a+50);
    str1.shrink_to_fit();
    str2.resize(b+50);
    str2.shrink_to_fit();

    long long n; cin >> n;

    for(long long i = 0;i<n;i++){
        long long count = 0;
        long long num1,num2; cin >> num1 >> num2;

        string aux = str2.substr(num1-1,num2-num1+1);
        cout << aux << endl;

        size_t found = str1.find(aux);
        while(found != string::npos){

            count++;
            found = str1.find(aux, found+1);
        }
        
        cout << count << endl;
    }
}
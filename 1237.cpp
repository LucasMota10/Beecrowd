#include <bits/stdc++.h>
using namespace std;

int main(){

    string str,str2;    

    while(getline(cin,str)){
        getline(cin,str2);
        int count = 0, max = 0;

        if(str.size() >= str2.size()){

            for(int i = 0;i<str.size();i++){
                count = 0;
                for(int j = 0;j<str2.size();j++){
                    count = 0;
                    int a = 1;
                    if(str[i] == str2[j]){
                        count++;
                        while(str[i+a] == str2[j+a]){
                            if(((i+a) > str.size() - 1) || ((j + a) > str2.size() - 1)){
                                  break;       
                            }
                            count++;
                            a++;
                        }
                    }
                    if(count >= max){
                        max = count;
                    }
                }
            }

        }else{

            for(int i = 0;i<str2.size();i++){
                count = 0;
                for(int j = 0;j<str.size();j++){
                    count = 0;
                    int a = 1;
                    if(str2[i] == str[j]){
                        count++;
                        while(str2[i+a] == str[j+a]){
                            if(((i+a) > str2.size() - 1) || ((j + a) > str.size() - 1)){
                                  break;       
                            }
                            count++;
                            a++;
                        }
                    }
                    if(count > max){
                        max = count;
                    }
                }
            }

        }

        cout << max << endl;

    }

}
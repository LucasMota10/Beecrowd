#include <stdio.h>

int main(){

    int area_de_abertura; scanf("%d",&area_de_abertura);
    int n; scanf("%d",&n);
    int num;
    int count = 0;

    for(int i = 0;i<n;i++){
        scanf("%d",&num);

        if(num*area_de_abertura >= 40000000){
            count++;
        }
    }

    printf("%d\n",count);
}
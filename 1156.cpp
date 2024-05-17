#include <stdio.h>

int main(){
    float s = 1;
    float k = 1;

    for(int i = 3; i<=39;i = i+2){
        float num = i;
        k = k*2; 
        s+=num/k;
    }
    printf("%.2f\n",s);
}
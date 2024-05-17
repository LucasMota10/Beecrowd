#include <stdio.h>

int main(){

    float s = 1;
    for(int i = 2;i<=100;i++){
        float num;
        num = i;
        s += 1/num;
    }
     printf("%.2f\n",s);
  
}
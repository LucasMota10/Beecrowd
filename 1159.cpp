#include <stdio.h>

int main(){

    int x,sum = 0,count = 0;
    do{
        sum = 0;
        count = 0;
        scanf("%d",&x);
        if(x == 0){
            break;
        }
        for(int i = x;i<x+11;i++){
            if(count == 5){
                break;
            }
            if(i%2 == 0){
                sum = sum + i;
                count++;
            }
        }
        printf("%d\n",sum);
    }while(x!=0);
}
#include <stdio.h>

int main(){

    int x;

    scanf("%d",&x);

    for(int i = 0;i<x;i++){
        int count = 0;
        int num;
        scanf("%d",&num);
        for(int i = num;i>0;i--){
            if(num%i==0){
                count++;
            }
        }
        if(count <= 2){
            printf("%d eh primo\n",num);
        }else{
            printf("%d nao eh primo\n",num);
        }
    }

}
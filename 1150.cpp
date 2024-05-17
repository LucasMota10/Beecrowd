#include <stdio.h>

int main(){
    int x,z,sum = 0,count = 0;
    scanf("%d",&x);

    do{
        scanf("%d",&z);
    }while(z <= x);

    for(int i = 0;i < z/2; i++){
        sum = sum + (x+i);
        count++;
        if(sum > z){
            break;
        }
    }
    printf("%d\n",count);
}
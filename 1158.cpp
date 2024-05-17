#include <stdio.h>

int main(){
    int num,x,y,sum = 0;
    scanf("%d",&num);
    for(int i = 0;i<num;i++){
        int count = 0, sum = 0;
        scanf("%d %d",&x,&y);   
            for(int i = x;i<x+(y*2);i++){
                if(count == y){
                    break;
                }
                if(i%2 != 0){
                    sum = sum + i;
                    count++;
                }     
            }
            printf("%d\n",sum);
}
}
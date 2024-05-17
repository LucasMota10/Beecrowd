#include <stdio.h>

int fatorial(int x);

int main(){
    int num;
    scanf("%d",&num);
    printf("%d\n",fatorial(num));
}

int fatorial(int x){
    int rec;

    if(x <= 1){
        return (1);
    }else{
        rec = x * fatorial(x - 1);
        return (rec);
    }
}
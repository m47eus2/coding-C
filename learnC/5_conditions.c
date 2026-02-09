#include <stdio.h>

int main(){
    int x=5, y=10, a=2, b=1;

    if(x==5){
        printf("X is equal to 5\n");
    }
    if(x>y){
        printf("X is greater than y\n");
    }
    else{
        printf("Y is greater than X\n");
    }

    if(x<y && a<b){
        printf("X is smaller than y and a is smaller than b\n");
    }
    if(x<y || a<b){
        printf("X is smaller than Y or a is smaller than b\n");
    }

    return 0;
}
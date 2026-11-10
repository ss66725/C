#include<stdio.h>
int *maxp(int *a, int *b){
    if(*a > *b){
        return a;
    }
    else{
        return b;
    }
}

int main(){
    int x = 3, y = 5;
    int *q = maxp(&x, &y);
    printf("%d\n", *q);   
    *q = 100;            
    printf("%d %d\n", x, y);
    return 0;
}

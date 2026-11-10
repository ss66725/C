#include<stdio.h>
int max(int x, int y){
    if(x > y){
        return x;
    }
    else{
        return y;
    }
}
int min(int x, int y){
    if(x < y){
        return x;
    }
    else{
        return y;
    }
}
int sum(int x, int y){
    return x + y;
}
void combine(int (*p)(int x, int y), int a[], int b[] , int c[], int n){
    for(int i = 0;i < n;i++){
        c[i] = p(a[i], b[i]);
        printf("%d\t", c[i]);
    }
}

int main(){
    int asw;
    int a[4] = {1, 4, 7, 2};
    int b[4] = {5, 3, 9, 6};
    int c[4];
    int (*p)(int x, int y);
    printf("Mode1 max | Mode2 min | Mode3 sum\n");
    printf("You want to choses Mode");
    scanf("%d", &asw);
    switch(asw){
        case 1:
            p = max;
            break;
        case 2:
            p = min;
            break;
        case 3:
            p = sum;
            break;
        default:
            printf("Invalid value");
            return 404;
    }
    combine(p, a, b, c, 4);
    return 0;
}
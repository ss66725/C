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

int main(){
    int asw;
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
    asw = p(3, 5);
    printf("The answer is %d\n", asw);
    return 0;
}
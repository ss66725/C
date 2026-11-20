#include<stdio.h>

int max(int x, int y);

int main(){
    int a = 723;
    int b = 309;
    printf("The max number is %d", max(a, b));
    return 0;
}

/* 返回两个数中较大的一个 */
int max(int x, int y){
    if(x<y){
        int temp;
        temp = x;
        x = y;
        y = temp;
    }
    return x;
}

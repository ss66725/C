#include<stdio.h>

/* 返回两个数中较大的一个 */
int max(int x, int y){
    int temp;
    if(x < y){
        temp = x;
        x = y;
        y = temp;
    }
    return x;
}

int main(){
    int a[100];
    int asw;

    printf("Please enter 100 numbers:\n");
    for(int i=0;i<100;i++){
        scanf("%d", &a[i]);
    }

    asw = a[0];
    for(int i=1;i<100;i++){
        asw = max(asw, a[i]);
    }

    printf("The max number is %d.\n", asw);

    return 0;
}

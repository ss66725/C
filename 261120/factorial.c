#include<stdio.h>

int factorial(int x);

int main(){
    int x;
    printf("Please enter the number to get its factorial!\n");
    scanf("%d", &x);
    int asw = factorial(x);
    if(asw==0){
        return 1;
    }
    printf("The asw is %d", asw);
    return 0;
}

/* 递归求阶乘；负数返回 0 表示出错 */
int factorial(int x){
    if(x<0){
        printf("Invalid value!");
        return 0;
    }
    else if(x==0||x==1){
        return 1;
    }
    else{
        return x*factorial(x-1);
    }
}

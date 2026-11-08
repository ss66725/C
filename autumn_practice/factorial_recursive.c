#include<stdio.h>
int factorial(int x);
int main(){
    int num,asw;
    printf("Please input the number you want to factorial:");
    scanf("%d",&num);
    asw = factorial(num);
    if(asw != 404){
        printf("The answer is %d",asw);
    }
}

int factorial(int x){
    if(x < 0){
        printf("Invalid value!");
        return 404;
    }
    else if(x == 1 || x == 0){
        return 1;
    }
    else{
        return x * factorial(x-1);
    }
}
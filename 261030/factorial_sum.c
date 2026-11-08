#include<stdio.h>
int factorial(int x);
int factorial_add(int x);

int main (){
    int num;
    printf("Please enter the number to add the factorials:");
    scanf("%d",&num);
    int result = factorial_add(num);
    printf("%d\n",result);
    return 0;
}

int factorial(int x){
    int sum = 1;
    for(int i = 1;i < x+1;i++){
        sum *= i;
    }
    return sum;
}

int factorial_add(int x){
    int sum = 0;
    for(int i = x;i > 0;i --){
        int num = factorial(i);
        sum += num;
    }
    return sum; 
}